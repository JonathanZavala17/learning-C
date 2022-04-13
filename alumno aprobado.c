//aprobacion de un alumno

#include<stdio.h>

int main(){
	
	float examen;
	printf("Digite la nota del examen ");
	scanf("%f",&examen);
	
	if (examen>5.94){
		printf("\nEl alumno esta aprobado");	
	}
	else if (examen>4.94 && examen<5.95){
	
		puts("\nestas en sufi we");	
	}
	else {
		puts("\nEl alumno esta reprobado");
	}
	
	return 0;
}
