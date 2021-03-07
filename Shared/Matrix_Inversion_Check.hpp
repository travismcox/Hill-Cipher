//
//  Matrix_Inversion_Check.hpp
//  Hill Cipher
//
//  Created by Travis Cox on 3/7/21.
//

#ifndef Matrix_Inversion_Check_hpp
#define Matrix_Inversion_Check_hpp

#include <stdio.h>
#include "Matrix.cpp"

bool n_by_n_check(Matrix to_check);
int calculate_determinate(Matrix to_calculate);
Matrix cofactor_matrix(Matrix source, int row_to_skip, int col_to_skip);
int sign(int row, int col);


#endif /* Matrix_Inversion_Check_hpp */
