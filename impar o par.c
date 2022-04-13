//si un numero es impar o par

#include<stdio.h>
#include<math.h>

int main (){
	
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
 
	if (numero % 2 ==0){
		printf("\nEL numero %i es par",numero);
	}
	else {
		printf("\nEl numero %i es impar",numero);
	}
	
	return 0;
} 
