#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

double factorial(double n){

	if( n == 1.0 || n == 0 ){
		return 1.0;
	}else {
		return n * factorial( n - 1.0);
	}
}

double degToRad(double deg){
	return (deg * PI)/180;
}

double seno(double deg){
	double value = 0;
	int sentido = 1;

	for(int n=1;n<200;n+=2){ // 1, 3, 5, 7, 9, ...
		value += sentido*( pow(deg, n)/factorial(n) );
		sentido *= -1;
	}

	return value;
}

double coseno(double deg){
	double value = 0;
	int sentido = 1;

	for(int n=0;n<200;n+=2){ // 0, 2, 4, 6, 8, ...
		value += sentido*( pow(deg, n) / factorial(n) );
		sentido *= -1;
	}
	
	return value;
}

double exp(double x){
	double value = 0;

	for(int n=0;n<200;n++){ // 0, 1, 2, 3, 4, 5, ...
		value += ( pow(x, n) / factorial(n) );
	}

	return value;
}

int main(void){

	double deg = 0;
	printf("\n\t Digita un angulo: ");
	scanf("%lf", &deg);
	
	deg = degToRad(deg);
	
	printf("\n\t Seno de %.3lf es: %.3lf", deg, seno(deg) );
	printf("\n\t Coseno de %.3lf es: %.3lf", deg, coseno(deg) );

	double x = 0;
	printf("\n\t Digita un valor x: ");
	scanf("%lf", &x);

	printf("\n\t Exp e^%.3lf es: %.3lf\n\n", x, exp(x) );

	return 0;
}
