//media geometrica

#include<stdio.h>
#include<math.h>

int main(){
	
	float n1,n2,n3,media_geo, media_geo2, mult;
	
	printf("Ingrese 3 numeros: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
//	mult=n1*n2*n3;
//	float expo=0.5;
	media_geo=cbrt(n1*n2*n3);
	media_geo2=pow((n1*n2*n3),0.333333);
//	media_geo2=pow(mult,expo);

	printf("\nLa media geometrica es: %.4f",media_geo);	
	printf("\nLa media geometrica es: %.4f",media_geo2);	

	float j1,j2,j3,j4,resp1,resp2;
	printf("\nIngrese 4 numeros: ");
	scanf("%f %f %f %f",&j1,&j2,&j3,&j4);
	
	resp1=1/4;
	resp2=pow((j1*j2*j3*j4),0.25);
	printf("\nLa media geometrica es: %.4f",resp2);	
	
	
	return 0;
}
