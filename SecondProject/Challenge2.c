#include <stdio.h>

int sum(int num){
    static int suma = 0;

    suma += num;

    return suma;
}

int main(){
    
    printf("%d ", sum(25) );
    printf("%d ", sum(15) );
    printf("%d \n", sum(30) );

    return 0;
}
