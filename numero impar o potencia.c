//elevar un numero a portencia o decir si es impar o no

#include<stdio.h>

int main(){
	
	int opcion, numero, resultado;
	
	printf("Ingrese un numero: ");
	scanf("%i",&numero);
	printf("\n\tDigite la opcion que hara con el numero");
	printf("\n1. Elevar al cuadrado");
	printf("\n2. Elevar al cubo");
	printf("\n3. Determinar si es par o impar");
	printf("\n4. Salir\n");
	scanf("%i",&opcion);
	
	
	switch(opcion){
		case 1: resultado=pow(numero,2);
				printf("\nEl resultado de elevar al cuadrado al numero %i es %i",numero,resultado);
		break;
		case 2: resultado=pow(numero,3);
				printf("\nEl resultado de elevar al cuadrado al numero %i es %i",numero,resultado);
		break;
		case 3: if(numero%2==0){
					printf("el numero %i es un numero par!",numero);
				}
				else {
					printf("el numero %i es un numero impar!",numero);
				}
		
		break;
		case 4: break;
		
	}
	
	return 0;
}
