#include <stdio.h>
#include <stdlib.h>
/*
 * Define a macro with the name MIN to determine the smallest of
 * 2 values 
 * Example : The minimum of -9 and 10 = -9
 *
*/

#define MIN(a,b) ( (a)<(b) ? (a) : (b) )

/*
 * Define a macro TOLOWER(c) that changes c into a small letter if
 * c is a capital letter or leaves c as is otherwise. Write a 
 * program that test the macro
 * and define a macro to get if a char is cap or lower
*/
#define isCapitalize(c) ( (c>=65) && (c<=90) ) ? 1 : 0
#define isLower(c) ( (c>=97) && (c<=122) ) ? 1 : 0
#define TOLOWER(c) (isCapitalize(c)) ? (c)+32 : (c)

/*
 * Define a macro MAX3 that determines the maximum of 3 values
 * The maximum of 20, 10, and -5 = 20
*/
#define MAX2(a,b) ( (a)>(b) ? (a) : (b) ) 
#define MAX3(a, b, c) MAX2(MAX2(a,b), c)

/*
 * Define a macro IS_LETTER that results in the value 1 if the 
 * argument is a letter 
*/

#define IS_LETTER(c) (isCapitalize(c) || isLower(c)) ? 1 : 0

int main(int argc, char **argv){
	
	int a, b;
	printf("\n\t Digita dos numeros: ");
	scanf("%d%d", &a, &b);
	
	printf("\t Min(%d,%d): %d", a, b, MIN(a, b) );
		
	printf("\n\t Digita un caracter en mayusculas: " );
	//scanf("%*[\n]");
	getchar(); // Limpiando buffer
	char c;
	scanf("%c", &c);
	printf("\t Tolower %c => %c \n", c, TOLOWER(c) );
	printf("\t Is Cap %c => %d \n", c, isCapitalize(c) );
	printf("\t Is Letter %c => %d \n", c, IS_LETTER(c) );
	
	printf("\t Digita tres numeros: ");
	int d = 0;
	scanf("%d%d%d", &a, &b, &d);
	printf("\t Max(%d,%d,%d): %d\n\n", a, b, d, MAX3(a,b,d) );

	return 0;
}
