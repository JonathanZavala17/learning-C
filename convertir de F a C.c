//operaciones

#include<stdio.h>

int main(){
	//variables en float
	float gC, gF, gC1, gF1, tC=0, tF=0; 
	
	//ingreso de temperaturas
	printf("ingrese temperatura Celsius: ");
	scanf("%f",&gC);
	printf("ingrese temperatura Fahrenheit: ");
	scanf("%f",&gF);
	
	//operaciones
	tF=(gC*1.8)+32;
	tC=(gF-32)/1.8;
	
	//resultados
	//printf("la temperatura de ",gC," grados Celsius a Fahrenheit es de: %.3f grados Fahrenheit\nla temperatura de Fahrenheit a Celsius es de: %.3f grados Celsius",tF,tC);
	printf("la temperatura de %.2f",gC);
	printf(" grados Celsius a Fahrenheit es de: %.3f grados Fahrenheit",tF);
	printf("\nla temperatura de %.2f",gF); 
	printf(" grados Fahrenheit a Celsius es de: %.3f grados Celsius",tC);
	
	
	//otra forma de hacerlo
	printf("\ningrese temperaturas Celsius y Fahrenheit respectivamente: ");
	scanf("%f %f",&gC1,&gF1);
	
	//operaciones
	tF=(gC1*1.8)+32;
	tC=(gF1-32)/1.8;
	
	//resultados
	printf("la temperatura de %.2f",gC1);
	printf(" grados Celsius a Fahrenheit es de: %.3f grados Fahrenheit",tF);
	printf("\nla temperatura de %.2f",gF1); 
	printf(" grados Fahrenheit a Celsius es de: %.3f grados Celsius",tC);
	
	return 0;
}
