//comprobar cual de los numeros es mayor

#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	if(n1>n2){
		printf("\nEl numero mayor es: %i",n1);
	}
	else if(n1<n2){
		printf("\nEl numero mayor es: %i",n2);	
	}
	else {
		printf("\nAmbos numeros %i son iguales",n1);
	}
	
	return 0;
}
