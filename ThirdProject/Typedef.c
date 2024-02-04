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

// Defining an array of 10 numbers

typedef int array[10];

// Definning an string 

typedef char *string;

int main(){
    
    int number = 10;
    i_pointer ptr = &number; // same as int *ptr
    i_pointer *matrix; // same as int **matrix
    
    i_pointer myArray[10]; // same as int *myarray[10];
    
    string str = "Hola";
    array arr1;
    
    printf("\n\t %s\n", str);

    for(int i=0;i<10;i++){
        arr1[i] = i;
    }

    printf("\n\t ");

    for(int i=0;i<10;i++){
        printf("%d ", arr1[i]);
    }

    printf("\n\t Direction of memory %d, value of number %d\n\n", ptr, *ptr);

    return 0;
}
