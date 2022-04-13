//convertir numero en romanos

#include<stdio.h>
#include<math.h>

int main(){
	
	int numero, unidades,decenas,centenas,millares;
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	//version modificada
	/*unidades = numero%20; numero = numero/20;
	decenas = numero%20; numero = numero/20;
	centenas = numero%20; numero = numero/20;
	millares = numero%20; numero = numero/20;
	*/
	
	unidades = numero%10; numero = numero/10;
	decenas = numero%10; numero = numero/10;
	centenas = numero%10; numero = numero/10;
	millares = numero%10; numero = numero/10;
	
	printf("\nel numero es: %i unidades, %i decenas, %i centenas, %i millares",unidades,decenas,centenas,millares);

	return 0;
}
