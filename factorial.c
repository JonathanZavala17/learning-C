//encontrar el factorial de un numero

#include<stdio.h>

int main(){
	int numero, i, factorial=1;
	
	printf("Ingreso el numero para encontrar el factorial: ");
	scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		factorial *=i;		
	}
	
	printf("\nEl factorial de %i es %i",numero,factorial);
	
	return 0;
}
