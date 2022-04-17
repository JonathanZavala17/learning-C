//suma de factoriales

#include<stdio.h>

int main(){
	int facA,facB, i,j, fact_a=1,fact_b=1,suma_factorial=0;
	
	printf("Ingreso el factorial a: ");
	scanf("%i",&facA);
	printf("Ingreso el factorial b: ");
	scanf("%i",&facB);
	
	for(i=1;i<=facA;i++){
		fact_a *=i;		
	}
	
	for(j=1;j<=facB;j++){
		fact_b *=j;		
	}
	
	suma_factorial=fact_a+fact_b;
		
	printf("\nEl factorial de %i es %i y el de %i es %i",facA,fact_a,facB,fact_b);
	printf("\ny la suma de los factoriales %i! y %i! es %i",facA,facB,suma_factorial);
	
	return 0;
}
