//switch

#include<stdio.h>

int main(){
	char nota;
	
	printf("Ingresar nota del estudiante: ");
	scanf("%c",&nota);
	
	switch(nota){
		case 'a': printf("Excelente"); break;
		case 'b': printf("Notable"); break;
		case 'c': printf("Aprobado"); break;
		case 'd': 
		case 'f': printf("Reprobado"); break;
		default: printf("se equivoco de nota");
		
	}	
	
	return 0;
}
