//edades

#include<stdio.h>
#include<math.h>

int main(){
	char nombre[30],sexo[20];
	int edad;
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("\nDigite sexo: ");
	gets(sexo);
	printf("Digite su edad: ");
	scanf("%i",&edad);

	if(strcmp(sexo,"masculino")==0 && edad>18){
		printf("\nSu nombre es: %s",nombre);
		
	}
	else {
		printf("\ntu nombre es %s, tu edad es de %i y tu sexo es %s",nombre,edad,sexo);
	}
	
	return 0;
}
