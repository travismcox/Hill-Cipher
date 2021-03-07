//
//  Matrix_Inversion_Check.cpp
//  Hill Cipher
//
//  Created by Travis Cox on 3/7/21.
//

#include "Matrix_Inversion_Check.hpp"

//Checks to make sure the matrix is square
bool n_by_n_check(Matrix to_check){
    return to_check.getRows() == to_check.getCols();
}

int calculate_determinate(Matrix to_calculate){
    if(to_calculate.getRows() == 2 && to_calculate.getCols() == 2){
        return (to_calculate.getCell(0, 0) * to_calculate.getCell(1, 1)) - (to_calculate.getCell(0, 1) * to_calculate.getCell(1, 0));
    }
    
    int row = 1, col = 1, sum = 0;
    for(int i = 0; i < to_calculate.getCols(); i++){
        col = i;
        Matrix cofactor = cofactor_matrix(to_calculate, row, col);
        sum += (sign(row, col) * to_calculate.getCell(row, col) * calculate_determinate(cofactor));
    }
    
    return sum;
}

int calculate_multiplicative_inverse(int original, int alphabet){
    int inverse = 0, alphabet_multiple = alphabet;
    while(inverse*original != alphabet_multiple + 1){
        inverse++;
        if(inverse * original > alphabet_multiple +1){
            alphabet_multiple += alphabet;
        }
    }
    return inverse;
}

int euclidian_algorithm(){
    return 0;
}

Matrix cofactor_matrix(Matrix source, int row_to_skip, int col_to_skip){
    Matrix cofactor = Matrix(source.getRows()-1, source.getCols()-1);
    int cofactor_row = 0; int cofactor_col = 0;
    
    for(int i = 0; i < source.getRows(); i++){
        cofactor_col = 0;
        for(int j = 0; j < source.getCols(); j++){
            if(i != row_to_skip || j != col_to_skip){
                cofactor.setCell(cofactor_row, cofactor_col, source.getCell(i, j));
                cofactor_col++;
            }
        }
        if(i != row_to_skip){
            cofactor_row++;
        }
    }
    
    return cofactor;
}

int sign(int row, int col){
    if(row % 2 == 0 && col % 2 == 0){
        return -1;
    }
    return 1;
}
