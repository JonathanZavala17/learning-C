//sentencia switch

#include<stdio.h>

int main(){
	
	/*
	int numero;
	printf("Digite un numero entre 1 y 5: \n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: printf("Es el numero 1"); break;
		case 2: printf("Es el numero 2"); break;
		case 3: printf("Es el numero 3"); break;
		case 4: printf("Es el numero 4"); break;
		case 5: printf("Es el numero 5"); break;
		default: printf("no es un numero entre 1 y 5\n");
		
	}
	*/
	char vocal;
	printf("Digite una de las vocales: \n");
	scanf("%c",&vocal);
	
	switch(vocal){
		case 'a': printf("Es la vocal a"); break;
		case 'e': printf("Es la vocal e"); break;
		case 'i': printf("Es la vocal i"); break;
		case 'o': printf("Es la vocal o"); break;
		case 'u': printf("Es la vocal u"); break;
		default: printf("no es una vocal");
		
	}
	
	return 0;
}
