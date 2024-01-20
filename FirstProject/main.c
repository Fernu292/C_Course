#include <stdio.h>
#include "./Headers/Other.h"
#include "./Headers/date.h"

int main(int argc, char **argv){
      
      int favNumber = 0;
      printf("\n\t Please enter your favorite number: ");
      scanf("%d", &favNumber);
      
      printf("\n\t That's my favorite number too, %d \n\n", favNumber);
  
      printf("\n\t Favorite number: %d \n\n", getFavoriteNumber() );

      return 0;
  
}
