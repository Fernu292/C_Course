#include <stdio.h>

double multiplyByTwo(double input){
    double twice = input * 2.0;
    return twice;
}

int main(int argc, char *argv[]){
    
    int age = 20;
    double salary = 12345.67;
    double myList[3] = {1.2, 2.3, 3.4};

    printf("\n\t Double your salary is %.3f\n\n", multiplyByTwo(salary) );

    return 0;
}
