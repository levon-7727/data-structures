#include <iostream>
#include <array>

class Matrix3x3{
public:
    std::array<std::array<int, 3>, 3> matrix;
    Matrix3x3(int arg11, int arg12, int arg13, int arg21, int arg22, int arg23, int arg31, int arg32, int arg33){
       matrix = {{
           {{arg11, arg12, arg13}},
           {{arg21, arg22, arg23}},
           {{arg31, arg32, arg33}}
       }};
    }
    
    int getElement(int row, int col) const {
        return matrix[row][col];
    }
    
    void setElement(int row, int col, int value){
        matrix[row][col] = value;
    }
    
    std::array<int, 3>& operator[](int index){
        return matrix[index];
    }
    
    void transpose(){
        for(int i = 0; i < 3; i++){
            for(int j = i + 1; j < 3; j++){
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void print() {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                std::cout<<matrix[i][j]<<" ";
            }
        }
        std::cout<<std::endl;
    }
};

    


int main()
{
    Matrix3x3 matrix(1, 2, 3, 4, 5, 6, 7, 8, 9);
    matrix.print();
    matrix.transpose();
    matrix.print();
    std::cout<<matrix[1][2];
    

    return 0;
}

//Контейнер std::array - 8