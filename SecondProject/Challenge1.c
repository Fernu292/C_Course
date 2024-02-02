#include <stdio.h>
#include <stdlib.h>

// A global double its only accessible in this file
static double sDouble = 0.0;

// A global float 
extern float eFloat;

// A function that is only accessible in this file
static void Hello(){
    printf("\n\t Hello World");
}

int main(int argc, char **argv){
    
    // An int variable with block scoe and temporany storage
    int number = 0;
    
    // A float local variable with permanent storage
    static float permantent = 0.0;

    // A register int variable
    register int count = 0;

    return 0;
}
