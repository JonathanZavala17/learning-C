//longuitud de circunferencias

#include<stdio.h>
#include<math.h>
#define PI 3.14159265359

int main(){
	
	//variables
	float longuitud=0, radio, area=0;
	
	//pedir datos
	printf("Ingrese el radio en centimetros: ");
	scanf("%f",&radio);
	
	//longuitud
	longuitud= 2 * PI * radio;	
	printf("\nla longuitud de la circunferencia de %.2f",radio); 
	printf(" centimetros de radio es de: %.4f cm",longuitud);
	
	//area
	area= PI * (pow(radio,2));	
	printf("\nel area de la circunferencia de %.2f",radio); 
	printf(" centimetros de radio es de: %.4f cm cuadrados",area);
	
	return 0;
}
