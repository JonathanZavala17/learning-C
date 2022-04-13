//raices reales e imaginarias

#include<stdio.h>
#include<math.h>

int main(){
	int numero;
	float resultado;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	if(numero>0){
		resultado=sqrt(numero);
		printf("\nEl numero %i posee una raiz cuadrada y es: %f",numero,resultado);
	}
	else {
		resultado=sqrt(numero*-1);
		printf("\nEl numero %i posee una RAIZ IMAGINARIA pero su resultado es %.2fi",numero,resultado);
	}
	
	return 0;
}
