#include <iostream>
#include <forward_list>
#include <cmath>
#include <utility>

class Polynomoc{
public:
    std::forward_list<std::pair<int, double>> flst;
    
    void addTerm(int deg, int coef){
        flst.push_front(std::make_pair(deg, coef));
    }
    
    double evaluate(int x){
        double result = 0;
        auto it = flst.begin();
        for(; it != flst.end(); it++){
            int deg = it->first;
            double coef = it->second;
            result += coef * std::pow(x, deg);
        }
        return result;
    }
    
    Polynomoc derivative(){
        Polynomoc deriv;
        auto it = flst.begin();
        for(; it != flst.end(); it++){
            if(it->first > 0){
                deriv.addTerm(it->first-1, it->second * it->first);
            }
        }
        return deriv;
    }
    
    void print(){
        flst.sort([](const std::pair<int, double> &a, const std::pair<int, double> &b){
            return a.first < b.first;
        });
        
        flst.reverse();
        
        auto it = flst.begin();
        std::cout<<it->second<<"x^"<<it->first<<" ";
        ++it;
        for(; it != flst.end(); it++){
            if(it->first > 0){
                if(it->second >= 0){
                    std::cout<<"+ "<<it->second<<"x^"<<it->first<<" ";
                }
                else{
                    std::cout<<it->second<<"x^"<<it->first<<" ";
                }
            }
            else{
                if(it->second >= 0){
                    std::cout<<"+ "<<it->second;
                }
                else{
                    std::cout<<it->second;
                }
            }
        }
        std::cout<<std::endl;
    }
};

int main()
{
    Polynomoc p;
    p.addTerm(2, 3.0);
    p.addTerm(0, 5.0);
    p.addTerm(1, -2.0);
    std::cout<<p.evaluate(2)<<std::endl;
    p.print();
    Polynomoc derP = p.derivative();
    derP.print();

    return 0;
}