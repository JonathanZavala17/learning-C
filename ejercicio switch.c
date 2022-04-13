//switch

#include<stdio.h>

int main(){
	int tipo;
	
	printf("Ingresar tipo de vehiculo: ");
	scanf("%i",&tipo);
	
	switch(tipo){
		case 1: printf("Su vehiculo es tipo turismo y su peaje es de 500"); break;
		case 2: printf("Su vehiculo es tipo autobus y su peaje es de 3000"); break;
		case 3: printf("Su vehiculo es tipo motocicleta y su peaje es de 300"); break;
		default: printf("su vehiculo no esta autorizado");
		
	}	
	
	return 0;
}
