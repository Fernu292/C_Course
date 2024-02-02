#include <stdio.h>
#include <stdlib.h>

extern int counter;

void display(){
    printf("%d ", counter+1);
}
