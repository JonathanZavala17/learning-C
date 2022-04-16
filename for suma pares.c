//suma los primeros 10 numeros pares

#include<stdio.h>

int main(){
	int i,j;
	int suma=0,suma2=0;
		
	for(i=0; i<=21; i++){
		if(i%2==0){
			suma +=i;
		}
		
	}
	
	for(j=0; j<=21; j+=2){
		suma2 +=j;
	}
	
	printf("El resultado de los numero pares de 1 a %i del metodo 1 es: %i ",i,suma);
	printf("\nEl resultado de los numero pares de 1 a %i del metodo 2 es: %i ",j,suma2);
	
	return 0;
}
