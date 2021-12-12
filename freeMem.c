#include "headers.h" //include header file

void freeMem(int ***tables, int nArrs, int row){
    for (int i = 0; i < nArrs+1; i++){  //loop through the table indexes, including the last element in the table
        for (int j = 0; j < row; j++){ //loop through the rows in the table array
            free(tables[i][j]); //free inner arrays in table, of dynamically allocated memory
        }
        free (tables[i]);   //free table indexes of dynamically allocated memory
    }
    free(tables); //free the table itself from dynamically allocated memory
}

