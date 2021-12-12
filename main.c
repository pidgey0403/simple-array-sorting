#include "headers.h" //include header file

int main() {
    //declare int variables that will hold the number of array slots, and the inner array dimensions, respectively
    int nArrs, row, column;
    int ***nTables; //declare triple pointer that will point to 3D array

    //step 1: prompt user for 3 input values
    printf("\nEnter the number of arrays (0 to quit): ");
    scanf("%d", &nArrs);    //store number of arrays in nArrs

    while (nArrs != 0) {    //control loop that handles execution or termination of program
        printf("Enter values for Rows, Columns (e.g. 2 3): ");
        scanf("%d %d", &row, &column);  //store the inner array dimensions (row x col) in respective variables

        //step 2: initialize the table as well as the inner arrays in the collection
        nTables=(int ***)calloc(nArrs+1,sizeof (int **)); //dynamically allocate memory for triple pointer table
        initArrays(nTables, nArrs+1, row, column);   //call initArray function to initialize the arrays in the collection

        //step 3: print out the collection of arrays, excluding the last array (which contains only 0s)
        printArrays(nTables, nArrs, row, column);

        //step 4: combine all arrays in the collection; adding the totals of each element position
        combineArrays(nTables, nArrs, row, column); //call combineArrays function to sum and place totals in last array
        printf("Array of combined totals based on %d arrays: \n", nArrs);
        printSingleArr(nTables,nArrs,row,column);   //call printSingleArr function to print only the last array (the combined array)

        //step 5: sort the combined array into ascending order
        sortArrays(nTables, nArrs, row, column); //call sortArrays function to sort last array
        printf("\nArray of combined totals based on %d arrays sorted (ascending order): \n", nArrs);
        printSingleArr(nTables,nArrs,row,column);   //call function to again print the last array (now sorted)

        freeMem(nTables, nArrs, row);   //free all dynamically allocated memory for the array of arrays

        printf("\nXXXXXXXXXXXXXX END OF SESSION XXXXXXXXXXXXXX\n\n");

        printf("\nEnter the number of arrays (0 to quit): ");   //prompt user for additional input, or quit program
        scanf("%d",&nArrs);
    }
        return 0;
}

