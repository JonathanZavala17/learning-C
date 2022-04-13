//calcular la media

#include<stdio.h>
#include<math.h>

int main(){
	
	float a,b,c,d,e,f,prom,prom1;
	
	printf("Ingrese primer numero: ");
	scanf("%f",&a);
	printf("\nIngrese segundo numero: ");
	scanf("%f",&b);
	printf("\nIngrese tercer numero: ");
	scanf("%f",&c);
	
	prom=(a+b+c)/3;
	
	printf("\nEl valor de la media aritmetica es: %.4f", prom);

	printf("\nIngrese 3 numeros ");
	scanf("%f %f %f",&d,&e,&f);

	prom1=(d+e+f)/3;
	
	printf("\nEl valor de la media aritmetica es: %.4f", prom1);
	
	return 0;
}
