//sumar n numeros  o multiplicar

//si se supera el 10 se multiplica sino se suma

#include<stdio.h>

int main(){
	int cont,n, suma=0, multi=1, resultado=0;
	
	
	printf("si es mayor que 10 se multiplicara del 1 al 10 = 10! \n");
	printf("si es menor que 10 se sumara del 1 al 10 = 10! \n");
	printf("Digite un mumero: ");
	scanf("%i",&n);
	
	cont =1;
	if(n>10){
		
		//remplazar 10 por n en el while y te calcula el factorial del numero
		while(cont<=10){
			multi *= cont;
			cont++;
			resultado = multi;
		}
		
	}
	else{
		
		while(cont<=10){
		
			suma += cont;
			cont++;
			resultado = suma;
		}
		
	}
	
	printf("\nEl resultado es: %i",resultado);
	
	
	return 0;
}
