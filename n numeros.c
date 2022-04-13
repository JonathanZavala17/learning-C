//sumar n numeros 

#include<stdio.h>

int main(){
	int cont,n, suma=0;
	
	printf("Digite el numero maximo a sumar: ");
	scanf("%i",&n);
	
	cont =1;
	
	while(cont <=n){
		
		suma += cont;
		cont++;
	}
	
	printf("El resultado es: %i ",suma);
	
	return 0;
}
