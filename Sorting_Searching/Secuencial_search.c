#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int SecSearch(int *arr, int number);

int main(){

	int *array = malloc(MAX*sizeof(int));

	for(int i=0;i<MAX;i++){
		array[i] = i + 1;
	}

	int number, index;
	printf("\n\t Digita que elemento deseas buscar: ");
	scanf("%d", &number);

	index = SecSearch(array, number);

	if(index>=0){
		printf("\n\t El elemento fue encontrado en %d\n\n", index);
	} else {
		printf("\n\t Elemento no encotrado\n\n");
	}

	return 0;
}

int SecSearch(int *arr, int number){
	
	int steps = 0;

	for(int i=0;i<MAX;i++){ // 0,1,2,3,4,5,..., MAX - 1
		if(arr[i] == number){
			printf("\n\t Pasos requeridos %d\n", steps);
			return i;
		}
		steps++;
	}

	return -1;
}
