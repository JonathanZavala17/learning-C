//salario

#include<stdio.h>
#include<math.h>

int main(){
	
	float valor_hora, pago_semana, pago_mes;
	float valor_hora1, pago_semana1, pago_mes1, horas_semanales;
	
	printf("Ingrese el pago por hora: ");
	scanf("%f",&valor_hora);
	
	pago_semana=valor_hora*44;
	pago_mes=pago_semana*4;
	
	printf("\nel salario semanal es: %.2f",pago_semana);
	printf("\nel salario mensual es: %.2f",pago_mes);
	
	
	printf("\nIngrese el pago por hora: ");
	scanf("%f",&valor_hora1);
	printf("\nIngrese las horas a la semana: ");
	scanf("%f",&horas_semanales);

	pago_semana1=valor_hora1*horas_semanales;
	pago_mes1=pago_semana1*4;
	
	printf("\nel salario semanal es: %.2f",pago_semana1);
	printf("\nel salario mensual es: %.2f",pago_mes1);
	
	
	return 0;
}

