//elementos pares y su suma

#include<stdio.h>

int main(){
	int numero,i,suma=0,total=0;
	
 	printf("Ingrese numero n: ");
	scanf("%i",&numero);
 	
	 for(i=1;i<=numero;i++){ 
	   	if(i%2==0){
		   	suma+=i;
		   	total++;
	  	}
    }
    
	printf("la suma total de los pares es : %i\n",suma);
	printf("los numeros sumados fueron: %i",total);

 	return 0;
}
