#include <stdio.h>

int main(int argc, char **argv){
    
    int favNumber = 0;
    printf("\n\t Please enter your favorite number: ");
    scanf("%d", &favNumber);
    
    printf("\n\t That's my favorite number too, %d \n\n", favNumber);

    return 0;
}
