#include <stdio.h>

int counter = 0;
void display();

int main() {
        
    while(counter < 5){
        display();
        counter ++;
    }

    printf("\n");
}


