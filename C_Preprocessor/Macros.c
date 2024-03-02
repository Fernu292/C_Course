#include <stdio.h>

// #define preprocessor directive is used to define
// both symbolic constants and macros.

// Symbolic constants
#define PI 3.14159
#define MAX 100
#define YES 1
// #define NULL 0 // Used for nullptr 

// Macros
// used for define a symbolic constant with arguments, defined
// in a #define preprocessor directive

// Utilizamos un operador ternario
#define MIN(a,b) ((a)<(b)?(a):(b))
#define SQUARE(x) (x)*(x)

// Macro examples
#define IS_LEAPYEAR(j) ( (j)%4==0 && (j)%100!=0 || (j)%400==0 )
#define TO_LOWER(c) ((c)-'A' + 'a')

int main(void){
	
	int a = 1, b = 2;

	printf("\n\t Min(%d,%d): %d",a, b, MIN(a,b) );
	printf("\n\t Cuadrado de %d es %d\n\n", 2, SQUARE(2) );

	return 0;
}
