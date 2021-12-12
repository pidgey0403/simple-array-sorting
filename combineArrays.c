void combineArrays(int ***table, int nArrs, int rows, int cols){
    for (int i = 0; i < nArrs; i++){    //loop through the outer array
        for (int j = 0; j < cols; j++){ //loop through the columns in the inner arrays
            for (int k =0; k < rows; k++){  //loop through the rows in the inner arrays
                /* sum the values of the same index in each inner array and store them
                 in the corresponding index in the final array in the table.  */
                table[nArrs][k][j] += table[i][k][j];
            }
        }
    }
}

