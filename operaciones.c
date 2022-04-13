//operaciones

#include<stdio.h>

int main(){
	int n1, n2, n3, n4, suma=0, resta=0, multi=0,div=0;
	
	printf("numero 1: ");
	scanf("%i",&n1);
	printf("numero 2: ");
	scanf("%i",&n2);
	
	suma = n1+n2;
	resta = n1-n2;
	multi = n1*n2;
	div = n1/n2;
	
	printf("el resultado de suma es: %i\nel resultado de resta es: %i\nel resultado de multiplicacion es: %i\nel resultado de division es: %i",suma,resta,multi,div);
	
	
	printf("\nnumero 1 Y 2: ");
	scanf("%i %i",&n3,&n4);
	suma = n3+n4;
	resta = n3-n4;
	multi = n3*n4;
	div = n3/n4;
	
	printf("el resultado de suma es: %i\nel resultado de resta es: %i\nel resultado de multiplicacion es: %i\nel resultado de division es: %i",suma,resta,multi,div);
	
	
	return 0;
}
