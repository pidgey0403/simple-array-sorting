void swap(int *first, int *second) {  //helper function to swap the elements via swap-by-reference
    int temp = *first;   //assign temporary int variable to the value of the first pointer (address of first)
    *first = *second;     //assign the value of first, to the value of second (address of second)
    *second = temp;     ///assign value of second to temp; value of first; which is the address of first
}
