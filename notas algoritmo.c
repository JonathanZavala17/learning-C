//

#include<stdio.h>
#include<math.h>

int main(){
	
	float parcial_1,parcial_2,parcial_3,promedio_parciales,examen_final,trabajo_final;
	float porcentaje_1=55,porcentaje_2=30,porcentaje_3=15;
	float prom_1,prom_2,prom_3, nota_final;
	
	printf("Ingrese nota parcial 1: ");
	scanf("%f",&parcial_1);
	printf("\nIngrese nota parcial 2: ");
	scanf("%f",&parcial_2);
	printf("\nIngrese nota parcial 3: ");
	scanf("%f",&parcial_3);
	printf("\nIngrese nota examen final: ");
	scanf("%f",&examen_final);
	printf("\nIngrese nota trabajo final: ");
	scanf("%f",&trabajo_final);
	
	//promedio
	promedio_parciales=(parcial_1+parcial_2+parcial_3)/3;
	prom_1=promedio_parciales*(porcentaje_1/100);
	prom_2=examen_final*(porcentaje_2/100);
	prom_3=trabajo_final*(porcentaje_3/100);
	
	nota_final=prom_1+prom_2+prom_3;
	
	//resultados
	printf("\nLa nota final es %.2f",nota_final);
	printf("\nPromedio 1 de %.2f",promedio_parciales);
	printf(" a 55 porciento es: %.2f",prom_1);
	printf("\nPromedio 2 de %.2f",examen_final);
	printf(" a 30 porciento es: %.2f",prom_2);
	printf("\nPromedio 1 de %.2f",trabajo_final);
	printf(" a 15 porciento es: %.2f",prom_3);
	
	
	float parcial1_1,parcial1_2,parcial1_3,promedio_parciales1,examen_final1,trabajo_final1;
	float porcentaje1_1,porcentaje1_2,porcentaje1_3;
	float prom1_1,prom1_2,prom1_3, nota_final1;
	
	printf("\nIngrese nota parcial 1: ");
	scanf("%f",&parcial1_1);
	printf("\nIngrese nota parcial 2: ");
	scanf("%f",&parcial1_2);
	printf("\nIngrese nota parcial 3: ");
	scanf("%f",&parcial1_3);
	printf("\nIngrese porcentaje para estas 3 notas: ");
	scanf("%f",&porcentaje1_1);
	printf("\nIngrese nota examen final: ");
	scanf("%f",&examen_final1);
	printf("\nIngrese porcentaje para este examen: ");
	scanf("%f",&porcentaje1_2);
	printf("\nIngrese nota trabajo final: ");
	scanf("%f",&trabajo_final1);
	printf("\nIngrese porcentaje para este trabajo: ");
	scanf("%f",&porcentaje1_3);
	
	//promedio
	promedio_parciales1=(parcial1_1+parcial1_2+parcial1_3)/3;
	prom1_1=promedio_parciales1*(porcentaje1_1/100);
	prom1_2=examen_final1*(porcentaje1_2/100);
	prom1_3=trabajo_final1*(porcentaje1_3/100);
	
	nota_final1=prom1_1+prom1_2+prom1_3;
	
	//resultados
	printf("\nLa nota final es %.2f",nota_final1);
	printf("\nPromedio 1 de %.2f",promedio_parciales1);
	printf(" a %.f",porcentaje1_1);
	printf(" porciento es: %.2f",prom1_1);
	printf("\nPromedio 2 de %.2f",examen_final1);
	printf(" a %.f",porcentaje1_2);
	printf(" porciento es: %.2f",prom1_2);
	printf("\nPromedio 1 de %.2f",trabajo_final1);
	printf(" a %.f",porcentaje1_3);
	printf(" porciento es: %.2f",prom1_3);
	
	
	return 0;
}
