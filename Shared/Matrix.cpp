//
//  Matrix.cpp
//  Hill Cipher
//
//  Created by Travis Cox on 3/7/21.
//

#include "Matrix.hpp"

using namespace std;



//Initializes a Matrix object with rows_in rows and cols_in columns
Matrix::Matrix(int rows_in, int cols_in){
    setRows(rows_in);
    setCols(cols_in);
    createMatrix();
}

//Sets the number of rows
void Matrix::setRows(<#int#> in){
    rows = in;
}

//Sets the number of columns
void Matrix::setCols(<#int#> in){
    cols = in;
}

//Returns number of rows
int Matrix::getRows(){
    return rows;
}

//Returns number of columns
int Matrix::getCols(){
    return cols;
}

//Creates a rows x cols matrix initialized to 0
void Matrix::createMatrix(){
    *matrix_data = new int[getRows()];
    for(int i = 0; i < getRows(); i++){
        matrix_data[i] = new int[getCols()];
        for(int j = 0; j < getCols(); j++){
            matrix_data[i][j] = 0;
        }
    }
}

//Returns data from cell row,col
int Matrix::getCell(<#int#> row, <#int#> col){
    int cell = 0;
    cell = matrix_data[row][col];
    return cell;
}

//Sets data at cell row, col
void Matrix::setCell(<#int#> row, <#int#> col, <#int#> data){
    matrix_data[row][col] = data;
}
