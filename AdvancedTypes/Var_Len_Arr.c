#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
    
    // size_t is the var of array length

    size_t size = 0;

    printf("\n\t Enter the number of elements you want to store: ");
    scanf("%zd", &size);

    float array1[size];
    
    for(int i=0;i<size;i++){
        array1[i] = i*2;
    }
    
    printf("\t ");

    for(int i=0;i<size;i++){
        printf("%.f ", array1[i]);
    }

    printf("\n");
    
    // Matrix 

    size_t rows = 0;
    size_t columns = 0;

    printf("\n\t Enter the number of rows: ");
    // Identificador de size_t %zd
    scanf("%zd", &rows);
    
    printf("\t Enter the number of columns: ");
    scanf("%zd", &columns);

    float beans[row][columns];



    return 0;
}
