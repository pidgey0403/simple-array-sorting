#include "headers.h"    //include header file

//function to print the entire table array without printing the last array
void printArrays(int ***table, int nArrs, int rows, int cols){
    for (int i = 0; i<nArrs;i++){   //loop through table indexes
        printf("Array Number: %d\n", i+1);  //print the inner array number
        for(int j = 0; j<rows; j++){    //loop through rows in inner array
            for (int k = 0; k < cols; k++){ //loop through columns in inner array
                printf("%5d ", (int) table[i][j][k]);   //print out every value in inner array
            }
            printf("\n");
        }
        printf("\n");
    }
}

//function to print out the last array in the table array
void printSingleArr(int ***table, int nArrs, int rows, int cols){
    for(int j = 0; j<rows; j++){
        for (int k = 0; k < cols; k++) {    //loop through the row and cols in inner array
            printf("%5d ", table[nArrs][j][k]); //print out values of inner array, only at the last index in table
        }
        printf("\n");
    }
}





