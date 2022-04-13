//ciclo for 
//mostrar de 1 a 10, ascendente 

#include<stdio.h>

int main(){
	int i,j;
	
	//aumento
	for(i=1;i<=10;i++){
		printf("%i ",i);
	}

	//decremento
	for(i=10;i>=1;i--){
		printf("%i ",i);
	}
	
	//planas
	for(j=1;j<=45;j++){
		printf("\n %i. No debo saltarme las clases de C",j);
	}
	
	return 0;
}
