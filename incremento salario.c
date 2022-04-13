//

#include<stdio.h>
#include<math.h>

int main(){
	
	float salario_base, aumento=25, salario_aumentado;
	float salario_base1, aumento1, salario_aumentado1, salario_aumentado2;
	
	
	printf("Ingrese salario base: ");
	scanf("%f",&salario_base);
	
	//forma 1
	salario_aumentado= salario_base+(salario_base*(aumento/100));
	
	//forma 2
	salario_aumentado1= salario_base*((aumento/100)+1);
	
	printf("\nF1 El nuevo salario con 25 porciento de aumento es: %.2f",salario_aumentado);
	printf("\nF2 El nuevo salario con 25 porciento de aumento es: %.2f",salario_aumentado1);	
	
	printf("\nIngrese salario base: ");
	scanf("%f",&salario_base1);
	printf("\nIngrese aumento : ");
	scanf("%f",&aumento1);
	
	//forma 2
	salario_aumentado2= salario_base1*((aumento1/100)+1);
	printf("\nF1 El nuevo salario con 25 porciento de aumento es: %.2f",salario_aumentado2);

	
	return 0;
}
