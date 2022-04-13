//15 descuento

#include<stdio.h>
#include<math.h>

int main(){
	float valor, descuento=15, valor_descontado;
	float precio_nuevo, descuento1, precio_final;
	
	printf("Ingrese el valor a descontar: ");
	scanf("%f",&valor);
	
	valor_descontado=valor-(valor*(descuento/100));
	
	printf("\nel valor a pagar debe ser: %.2f",valor_descontado);
	
	//agregando el propio descuento
	printf("\nIngrese el valor a descontar: ");
	scanf("%f",&precio_nuevo);
	
	printf("\nIngrese el descuento concedido: ");
	scanf("%f",&descuento1);
	
	precio_final=precio_nuevo-(precio_nuevo*(descuento1/100));
	
	printf("\nel valor a pagar debe ser: %.2f",precio_final);
	
	
	return 0;
}

