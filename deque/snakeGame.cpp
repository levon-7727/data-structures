#include <iostream>
#include <deque>
#include <utility>
#include <stdexcept>
#include <random>
#include <algorithm>

class SnakeGame{
private:
    int width;
    int height;
    int x;
    int y;
    std::deque<std::pair<int, int>> snake;
    
public:
    bool hasFood = false;
    std::pair<int, int> food;
    
    
    std::random_device rd;
    std::mt19937 gen;
    
    SnakeGame(int width, int height, int startY, int startX) : width(width), height(height),
                                                                x(startX), y(startY){
        snake.push_front(std::pair<int, int>(y, x));                                                                
    }
                                            
    void moveUp(){
        if(y == 0){
            throw std::out_of_range("snake can not moveUp");
        }
        y--;
        snake.push_front(std::pair<int, int>(y, x));
        if(hasFood && food == snake.front()){
            hasFood = false;
            spawnFood();
        }
        else{    
            snake.pop_back();
        }
    }                                        
    
    void moveDown(){
        if(y == height-1){
            throw std::out_of_range("snake can not moveDown");
        }
        y++;
        snake.push_front(std::pair<int, int>(y, x));
        if(hasFood && food == snake.front()){
            hasFood = false;
            spawnFood();
        }
        else{    
            snake.pop_back();
        }
    }
    
    void moveLeft(){
        if(x == 0){
            throw std::out_of_range("snake can not moveLeft");
        }
        x--;
        snake.push_front(std::pair<int, int>(y, x));
        if(hasFood && food == snake.front()){
            hasFood = false;
            spawnFood();
        }
        else{    
            snake.pop_back();
        }
    }
    
    void moveRight(){
        if(x == width-1){
            throw std::out_of_range("snake can not moveRight");
        }
        x++;
        snake.push_front(std::pair<int, int>(y, x));
        if(hasFood && food == snake.front()){
            hasFood = false;
            spawnFood();
        }
        else{    
            snake.pop_back();
        }
    }
    
    void spawnFood(){
        std::vector<std::pair<int, int>> freeCages;
        for(int y1 = 0; y1 < height; y1++){
            for(int x1 = 0; x1 < width; x1++){
                if(std::find(snake.begin(), snake.end(), std::make_pair(y1, x1)) == snake.end()){
                    freeCages.push_back(std::pair<int, int>(y1, x1));
                }
            }
        }
        
        if(!freeCages.empty()){
            std::uniform_int_distribution<> dist(0, freeCages.size()-1);
            food = freeCages[dist(gen)];
            hasFood = true;
        }
        else{
            hasFood = false;
        }
    }
    
    void print(){
        for(int y1 = 0; y1 < height; y1++){
            for(int x1 = 0; x1 < width; x1++){
                if(std::make_pair(y1, x1) == snake.front()){
                    std::cout<<'@';
                }
                else if(std::find(snake.begin(), snake.end(), std::make_pair(y1, x1)) != snake.end()){
                    std::cout<<'O';
                }
                else if(hasFood == true && food == std::make_pair(y1, x1)){
                    std::cout<<'*';
                }
                else{
                    std::cout<<'.';
                }
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }                                    
};

int main()
{
    SnakeGame game(3, 3, 0, 0); 
    game.print();

    game.moveRight();
    game.print();

    game.moveDown();
    game.print();

    game.moveLeft();
    game.print();

    return 0;
}