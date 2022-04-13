//Honda tiene 5%, Yamaha 8%, Suzuki 10%, otras 2%

#include<stdio.h>
#define DHonda 5
#define DYamaha 8
#define DSuzuki 10
#define DOtras 2

int main(){
	char nombre_marca[15];
	float precio,descuento,precio_descontado;


	printf("\nIngrese la marca de la motocicleta: ");
	gets(nombre_marca);
	printf("\nIngrese el precio: ");
	scanf("%f",&precio);
	
	if (strcmp(nombre_marca,"honda")==0){
		descuento=DHonda;
		precio_descontado=((100-descuento)/100)*precio;
		printf("\nEl precio a pagar por la motocicleta Honda con descuento del %.f porciento es: %.2f",descuento,precio_descontado);
	}
	if (strcmp(nombre_marca,"yamaha")==0){
		descuento=DYamaha;
		precio_descontado=((100-descuento)/100)*precio;
		printf("\nEl precio a pagar por la motocicleta Yamaha con descuento del %.f porciento es: %.2f",descuento,precio_descontado);
	}
	if (strcmp(nombre_marca,"suzuki")==0){
		descuento=DSuzuki;
		precio_descontado=((100-descuento)/100)*precio;
		printf("\nEl precio a pagar por la motocicleta Suzuki con descuento del %.f porciento es: %.2f",descuento,precio_descontado);
	}
	if (strcmp(nombre_marca,"otra")==0){
		descuento=DOtras;
		precio_descontado=((100-descuento)/100)*precio;
		printf("\nEl precio a pagar por la motocicleta de otra marca con descuento del %.f porciento es: %.2f",descuento,precio_descontado);
	}

	return 0;
}
