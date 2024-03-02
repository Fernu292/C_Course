#include <stdio.h>

int main(void){
	
	int n = 0;
	
	printf("\n\t Digia el numero de filas: ");
	scanf("%d", &n);
	
	printf("\n\t Numero de filas %d\n", n);

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
