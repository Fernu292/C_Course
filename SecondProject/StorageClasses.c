#include <stdio.h>
#include <stdlib.h>


// External variables
// Make a variable global and accessing it from other modules
// We cannot initialize it, we asing a value in other modules
// Using a global variable with extern storage class
int i = 5;
void foo(void);

// Static
static double salary = 100.0; // Only this module can access this variable

int counter(){
    static int count = 0;
    int count2 = 0;
    
    printf("\n\t Counter2: %d", count2);
    count ++;
    count2++;

    return count;
}

int main(int argc, char *argv[]){
    
    // Auto 
    // Is the default storage class for local variables
    
    int count; // Auto storage class
    auto int Month; // Auto storage class 
    
    // External variables 
    printf("\n\t Number i: %d\n", i);
    foo();
    printf("\n\t Number i: %d\n", i);
    
    // Static variables
    // In local variables it instructs the compiler to keep the variable
    // in existence during the life-time of the program 
    // In global variables modifies the scope of the variable, retricting it to the file in which
    // it is declared 
    
    static int number = 0; // Extends the life-time of the variable
    
    // Example of static variable
    printf("\t");
    for(int i=0;i<5;i++){
        printf("\n\t Counter: %d",counter() );
    }
    printf("\n");
    
    // Register 
    // Is used to define local variables thar should be stored in a register
    // instead of RAM, with the maximum size equal to the register size
    // it should be used only for variables that required quick access

    register int Miles;
    
    // We cannot access the direction of memory of a register variable
    // int *ptr = &Miles; Does not work
    // But we can create a pointer as a register

    int number2 = 10;
    register int *ptr = &number2;

    printf("\n\t Accesing number2 direction: %d\n", ptr);
    printf("\n\t Accesing number2 value: %d\n", *ptr);

    return 0;
}
