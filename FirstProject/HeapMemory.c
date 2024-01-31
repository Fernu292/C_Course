#include <stdio.h>
#include <stdlib.h>

double *multiplyByTwo (double *input) {
    double *twice = malloc(sizeof (double));
    *twice = *input * 2.0;

    return twice;
}

int main(int argc, char *argv[]){
    int *age = malloc (sizeof (int));
    *age = 20;

    double *salary = malloc(sizeof (double) );
    *salary = 12345.67;
    
    // Array Dinamico 
    double *myList = malloc(3*sizeof (double));
    myList[0] = 1.2;
    myList[1] = 2.3;
    myList[2] = 3.4;

    double *twiceSalary = multiplyByTwo(salary);

    printf("\n\t El doble de tu salario es: %.3f\n\n", *twiceSalary);
    
    free(age);
    free(salary);
    free(myList);
    free(twiceSalary);

    return 0;
}
