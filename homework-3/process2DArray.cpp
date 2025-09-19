#include <iostream>
#include <array>

int duble(int x){
    return x * 2;
}

template<typename T, typename Func, std::size_t Rows, std::size_t Cols>

std::array<std::array<T, Cols>, Rows> process2DArray(std::array<std::array<T, Cols>, Rows>& matrix, Func f){
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Cols; j++){
            matrix[i][j] = f(matrix[i][j]);
        }
    }
    return matrix;
}


int main()
{
    std::array<std::array<int, 2>, 3> matrix = {{
        {{1, 2}},
        {{3, 4}},
        {{5, 6}}
    }}; 
    matrix = process2DArray(matrix, duble);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            std::cout<<matrix[i][j]<<" ";
        }
    }
    std::cout<<std::endl;
    
    return 0;
}

//Контейнер std::array - 10