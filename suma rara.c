//suma 1-2+3-4+5-6... +n
//calcular de forma rapida
//numero par = (n/2)*(-1) o -(n/2)
//numero impar = (parte entera de(n/2))+1

#include<stdio.h>

int main(){
	int n, i;
	int icvrs;
	int suma=0, suma_pares=0, suma_impares=0;
	int resultado;
	
	printf("Ingrese un  numero maximo\n");
	scanf("%i",&n);
	
	/*
	i=1;
	while(i<=n){
		if(i%2==0){
			icvrs = i*-1;
			suma_pares +=icvrs;
			printf("%i\n",icvrs);
	
		}
		else{
			suma_impares +=i;
			printf("%i\n",i);
			
		}
		i++;	
	
	}
	
	suma =  suma_pares+suma_impares;
	printf("El resultado de la suma es: %i ",suma);
	
	*/
	
		//mejorando el codigo
		
	if(n%2==0){
			resultado= -(n/2);
			printf("%i\n",resultado);
	
		}
	else{
			resultado= (n/2)+1;
			printf("%i\n",resultado);
			
		}
	
	return 0;
}
