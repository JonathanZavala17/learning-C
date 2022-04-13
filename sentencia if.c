//sentencia if

#include<stdio.h>
#include<math.h>

int main(){
	int n1,n2,resultado;
	
	printf("Ingrese dos numeros: ");
	scanf("%i %i",&n1,&n2);
	resultado=n1+n2;
	
	if (n1 % n2 ==0){
		
		printf("\nEl numero %i es divisible entre el numero %i",n1,n2);
	}
	else {
		printf("\nEl numero %i no es divisible entre el numero %i",n1,n2);
	}
	
	
	printf("\nel resultado es: %i",resultado);
	
	return 0;
}


