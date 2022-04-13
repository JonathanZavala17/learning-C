//validar numero positivo

#include<stdio.h>

int main(){
	float numero;
	
	puts("Ingrese un numero");
	scanf("%f",&numero);
	
	if (numero>0){
		printf("\nEl numero %.4f es positivo",numero);
	}
	else if(numero==0){
		printf("\nEl numero %.f es 0",numero);
		
	}
	else {
		printf("\nEl numero %.4f es negativo",numero);
	}
	
	return 0;
}
