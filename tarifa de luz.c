//tarifa de luz
//1.2 para menos de 1.000 kWxh
//1.0 para 1.000 y 1.850 kWxh
//0.9 para mas de 1.850 kWxh

#include<stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9
#define PrecioLuzKW 20.15

int main (){
	
	float gasto, tasa, precio;
	
	printf("Digite el total de gasto: ");
	scanf("%f",&gasto);
	
	if (gasto < 1000){
		tasa = TARIFA1;
		//precio a pagar
		precio= (((gasto/1000)*PrecioLuzKW)/tasa);	
	}
	
	if (gasto < 1850 && gasto >1000){
		tasa = TARIFA2;
		//precio a pagar
		precio= (((gasto/1000)*PrecioLuzKW)/tasa);	
	}
	
	if (gasto > 1850){
		tasa = TARIFA3;
		//precio a pagar
		precio= (((gasto/1000)*PrecioLuzKW)/tasa);	
	}
	
	printf("\nLa tarifa a pagar es %.2f y el precio a pagar es %.4f",tasa,precio);
	
	return 0;
} 
