#include <stdio.h>
#include <stdlib.h>

float sum(float *arr, size_t n){
	float result = 0;
	for(int i=0;i<n;i++){
		result+=arr[i];
	}

	return result;
}

int main(){
	
	size_t elements = 0;
	
	printf("\n\t Digita el numero de elementos: ");
	scanf("%zd", &elements);
	float *arr = malloc(elements*sizeof(float));
	printf("\n\t Digita los elementos de tu array: ");
	for(int i=0;i<elements;i++){
		scanf("%f", arr+i);
	}

	printf("\n\t La suma es: %.3f\n\n", sum(arr, elements));

	return 0;
}
