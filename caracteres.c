//ingresar un nombre y signo

#include<stdio.h>

int main(){
	char nombre[30],signo[20];
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("\nDigite su signo: ");
	gets(signo);
	
	if(strcmp(signo,"escorpio")==0){
		printf("\nEl signo es Escorpio, su nombre es: %s",nombre);
		
	}
	else {
		printf("\nEres un falso signo");
	}
	
	return 0;
}
