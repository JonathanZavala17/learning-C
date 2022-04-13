//tipos de datos

#include<stdio.h>

int main(){
	char a = 'e'; //
	short b = -15;
	int c = 24000;
	unsigned int d = 50500;
	long e = 1700400;
	float f = 20.04;
	double g = 41125.2631;
	long double h = 3.14e+2;// no sirvio
	
	
	printf("el char es: %c", a);
	printf("\nel short es: %i", b);
	printf("\nel int es: %i", c);
	printf("\nel unsigned int es: %i", d);
	printf("\nel long es: %li", e);
	printf("\nel float es: %.3f", f);
	printf("\nel double es: %.4lf", g);
	printf("\nel long double es: %Lf", h);
	
	return 0;
}
