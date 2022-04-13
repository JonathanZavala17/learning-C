//cajero automatico con saldo de 1000 dolares

#include<stdio.h>

int main(){
/*
	int cuenta, numero_de_seguridad;
	int id_cuenta1= 3801060146,id_cuenta2=3801062232,id_cuenta3=26;
	int numero_de_seguridad1=9797,numero_de_seguridad2=9798,numero_de_seguridad3=9799;
	int saldo1=100, saldo2=1000, saldo3=400;
	float saldo, valor=0;
	
	printf("\nIngrese su numero de seguridad: ");
	scanf("%i",&numero_de_seguridad);
	printf("\nIngrese su numero de cuenta: ");
	scanf("%i",&cuenta);

	switch(cuenta){
		case 1: 
		if (numero_de_seguridad==numero_de_seguridad1){
		saldo=saldo1;
		cajero(saldo);
		printf("\nHola Jona");
	}
		break;
		case 2: 
		printf("\nHola Rene");
		break;
		
	}


int cajero(float valor){
	
	printf("\n\tBienvenido a tu cajero, %.2f",saldo);
}
	
	if(cuenta==id_cuenta1 && numero_de_seguridad==numero_de_seguridad1){
		saldo = saldo1;
		printf("\nSu saldo es: $%.2f",saldo);
	} 


*/	

	int opcion;
	float agregar,retirar, saldo=1000;
	
	printf("\n\tBienvenido a tu cajero");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero en la cuenta");
	printf("\n3. Mostrar dinero disponible en cuenta");
	printf("\n4. Salir");
	printf("\nOpcion :");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: printf("\nCuanto dinero desea ingresar: $");
				scanf("%f",&agregar);
				saldo += agregar;
				printf("\nSe ha agregado un valor de $%.2f y el saldo que posee en su cuenta es de: $%.2f",agregar,saldo);
		break;
		
		case 2: 
				printf("\nCuanto dinero desea ingresar: $");
				scanf("%f",&retirar);
				if(retirar<saldo){
					saldo -= retirar;
					printf("\nEl valor que retiro es de $%.2f y el saldo que posee en su cuenta es de: $%.2f",retirar,saldo);
				}
				else {
					printf("\nEl retiro es mayor al valor que tiene en la cuenta");
				}
				
		break;
		
		case 3: 
				printf("\nEl saldo que posee en esta cuenta es: $%.2f",saldo);
		break;
		
		case 4: break;
		default: printf("\nEs usted un pobre y no posee dinero");
		
	}
	
	
	return 0;
	
}
