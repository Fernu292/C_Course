// Define can be used to define symbolic or manifest, constants
// in a program

// Syntax is the preprocessor statement name in uppercase
// and the value whitout equals sing
#define YES 1

// a definition for a name can include an expresion
#define TWO_PI 2.0*3.141592654

// NULL define 
// the define name NULL is frequently used by programmers to represent
// the null pointer
// NULL is already defined on our system inside a file named <stddef.h>
//
// By including a definition such as 
#define NULL 0

#include <stdio.h>

int main(){
    
    printf("\n\t %.3f ", TWO_PI);

    return 0;
}
