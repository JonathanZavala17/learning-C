//entradas y salidas

#include<stdio.h>

int main(){
	int a = 10;
	float b = 15.5;
	char c = 'e';
	
	int d;
	float e;
	char f;
	
	char x[50];
	
	
	int suma = 10;
	/*
	printf("%i %.1f %c", a, b, c);
	printf("\ndigite un valor entero: ");
	scanf("%i",&d);
	printf("\nel valor de int es: %i",d);
	
	printf("\ndigite un valor flotante: ");
	scanf("%f",&e);
	printf("el valor de float es: %.3f",e);
	
	printf("\ndigite un valor char: ");
	scanf("%c",&f);
	printf("el valor de char es: %c",f);
	

	printf("\ndigite su nombre: ");
	scanf("%s",x);
	printf("tu nombre es: %s",x);
*/	
	printf("\ndigite su nombre: ");
	gets(x);
	printf("tu nombre es: %s",x);
	
	
	
	return 0;
}
