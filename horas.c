//ingresar horas, minutos y segundos

#include<stdio.h>

int main(){
	int horas, minutos, segundos, t1,t2,t3, hora_total;
	
	printf("Digite el numero de horas: ");
	scanf("%i", &horas);
	printf("\nDigite el numero de minutos: ");
	scanf("%i", &minutos);
	printf("\nDigite el numero de segundos: ");
	scanf("%i", &segundos);
	
	t1=horas*3600;
	t2=minutos*60;
	t3=segundos*1;
	
	hora_total=t1+t2+t3;
	
	printf("\nlos segundos contenidos en %i",horas);
	printf(" horas, %i",minutos);
	printf(" minutos y %i",segundos);
	printf(" segundos son: %i",hora_total);
	
	
	return 0;
}
