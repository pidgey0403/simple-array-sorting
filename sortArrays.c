#include "headers.h"    //include header file

void sortArrays(int ***table, int nArrs, int rows, int cols){
    //treat the 2D array as a 1D array and apply a bubble sort algo accordingly;
    int dimension = rows*cols; //local variable to store the value of rows*cols; the dimensions for the loops
    for (int i = 0; i < dimension; ++i) { //loop through rows
        for (int j = 0; j < dimension - 1; ++j) { //loop through columns (one less than rows)
            int curRow = j / cols; //store current row index
            int nexRow = (j + 1) / cols; //store next index row
            int curCol = j % cols; //store current column index
            int nexCol = (j + 1) % cols; //store next index column
            //if current index value is greater than the next index value
            if (table[nArrs][curRow][curCol] > table[nArrs][nexRow][nexCol]){
                /*call helper function to utilize swap-by-reference in order to
                change the values of current and next index in the array */
                swap(&table[nArrs][curRow][curCol], &table[nArrs][nexRow][nexCol]); //pass the addresses of the indexes
            }
        }
    }
}

