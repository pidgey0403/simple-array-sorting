#include "headers.h"    //include header file

void initArrays(int ***table,int nArrs, int rows, int cols){
    srand(time(NULL)); //initialize srand function

    //dynamically allocate memory for the cells (inner arrays that the 3d pointer points to)
    for (int i = 0; i < nArrs; i++){    //loop through outer array in table
        table[i] = (int **) calloc(rows, sizeof(int*)); //dynamically allocate memory for row index in inner array
        for (int j = 0; j < rows; j++){ //loop through the rows in inner array in table
            table[i][j] = (int *) calloc(cols, sizeof (int*)); //dynamically allocate memory for col index in inner array
        }
    }

    //randomly assign values to cells using rand function
    for (int i = 0; i<nArrs-1;i++){     //loop through outermost indexes
        for(int j = 0; j<rows; j++){    //loop through rows of inner array
            for (int k = 0; k < cols; k++){     //loop through columns of inner array
                //initialize the arrays with a random int between 1 and 10x the total num of elements in collection
                table[i][j][k] = rand() % ((nArrs*rows*cols*10)-1)+1;
            }
        }
    }
}