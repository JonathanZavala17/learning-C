//operador de asignacion

#include<stdio.h>

int main(){
	int a,b,c,d;
	a=b=c=d=10;
	a+=12;
	b-=3;
	c*= 5;
	d*=4;
	d/=8;
	
	printf("el valro de a, b y c es: %i %i %i %i", a,b,c,d);


	return 0;
}
