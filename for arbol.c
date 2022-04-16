//suma los primeros 10 numeros pares

#include<stdio.h>

int main(){
	int numero,i,j,k;
	
	printf("Digite el numero de filas: ");
	scanf("%i",&numero);
	
	//arbol
	for(i=1;i<=numero;i++){
		for(j=numero-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	
	//tronco
	for(i=1;i<2;i++){
		for(j=numero-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<2;k++){
			printf("#");
		}
		printf("\n");
	}
	
	return 0;
}
