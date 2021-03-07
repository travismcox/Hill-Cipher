//
//  Matrix.hpp
//  Hill Cipher
//
//  Created by Travis Cox on 3/7/21.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>

class Matrix{
private:
    int rows;
    int cols;
    int** matrix_data;
    
    void setRows(int);
    void setCols(int);
    void createMatrix();
public:
    Matrix(int, int);
    int getRows();
    int getCols();
    int getCell(int, int);
    void setCell(int, int, int);
};

#endif /* Matrix_hpp */
