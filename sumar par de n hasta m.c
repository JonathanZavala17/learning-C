//calcular suma par de n hasta m

#include<stdio.h>

int main(){
	int n, m, i, suma=0;

	
	printf("Ingrese un  numero minimo\n");
	scanf("%i",&n);
	printf("Ingrese un  numero maximo\n");
	scanf("%i",&m);
	
	i=n;
	while(i<=m){
		if(i%2==0){
			suma += i;
	
		}
		i++;	
	
	}
	
	printf("El resultado de la suma es: %i ",suma);

	return 0;
}
