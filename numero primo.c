//encontrar un numero primo

#include<stdio.h>

int main(){
	int numero, i, cont=0;
	
	printf("Ingreso un numero: ");
	scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			cont++;
		}
		
	}
	
	if(cont>2){
		printf("\nEl numero %i es un numero compuesto",numero);
	}
	else{
		printf("\nEl numero %i es un numero primo",numero);
	}
	
	return 0;
}
