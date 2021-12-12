#ifndef ASSIGNMENT_4_DEFINITIONS_H
#define ASSIGNMENT_4_DEFINITIONS_H

    //function prototypes included with signatures
    void initArrays(int ***table,int nArrs, int rows, int cols);
    void printArrays(int ***table, int nArrs, int rows, int cols);
    void combineArrays(int ***table, int nArrs, int rows, int cols);
    void sortArrays(int ***table, int nArrs, int rows, int cols);
    void swap(int *pInt, int *pInt1);
    void printSingleArr(int ***table, int nArrs, int rows, int cols);
    void freeMem(int ***tables, int nArrs, int row);

#endif //ASSIGNMENT_4_DEFINITIONS_H
