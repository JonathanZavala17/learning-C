//directivas del preprocesador y variables

#include<stdio.h> //libreria

#define PI 3.141692 //macro

int z = 2; //variables global
int main(){
	int x = 10; //variable local
	int y = 5;
	
	float suma = 0;
	suma = PI + x;
	
	/*
	%i entero
	%f float
	%.3f para agregar las decimales
	
	*/
	printf("La suma es: %.3f", suma);
	return 0;
}
