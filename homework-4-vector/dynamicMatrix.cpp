#include <iostream>
#include <vector>

class DynamicMatrix{
    int row;
    int column;
    std::vector<std::vector<int>> matrix;
public:
    DynamicMatrix(int row, int column) : row(row), column(column){
        matrix = std::vector<std::vector<int>>(row, std::vector<int>(column, 0));
    }
    int getElement(int row, int column) const {
        return matrix[row][column];
    }
    void setElement(int row, int column, int value) {
        matrix[row][column] = value;
    }
    void addRow(std::vector<int> &vec){
        row++;
        matrix.push_back(vec);
    }
    void addColumn(std::vector<int> &vec){
        column++;
        for(int i = 0; i < vec.size(); i++){
            matrix[i].push_back(vec[i]);
        }
    }
    void print(){
        for(int i = 0; i  <row; i++){
            for(int j = 0; j < column; j++){
                std::cout<<matrix[i][j]<<" ";
            }
        }
        std::cout<<std::endl;
    }
};

int main()
{
    DynamicMatrix matrix(3, 3);
    matrix.setElement(1, 1, 42);
    std::vector<int> vecR = {4, 5, 6};
    matrix.addRow(vecR);
    std::vector<int> vecC = {7, 8, 9, 10};
    matrix.addColumn(vecC);
    matrix.print();
    
    return 0;
}