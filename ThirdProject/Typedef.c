// typedef keyword is and advanced feature in C
// that enables to create our own name for an existing data type
//
// To define a new type name with typedef
// write the statement as if a variable of the desired type were being declared
// where the name of the declared variable would normally appear
// in front of everything place the keyword typedef
//

#include <stdio.h>
typedef int Counter;

// defines the name Counter to be equivalent to the C data type int
Counter i, j;

typedef int* i_pointer;

// typedef vs #define
// #define Counter int; has the same results as using typedef 


int main(){
    
    int number = 10;
    i_pointer ptr = &number; // same as int *ptr
    i_pointer *matrix; // same as int **matrix
    
    i_pointer myArray[10]; // same as int *myarray[10];

    printf("\n\t Direction of memory %d, value of number %d\n\n", ptr, *ptr);

    return 0;
}
