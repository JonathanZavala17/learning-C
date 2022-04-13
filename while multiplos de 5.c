//multiplos de 5 entre 1 y n

#include<stdio.h>

int main(){
	int n, i;
	
	printf("Ingrese un  numero maximo\n");
	scanf("%i",&n);
	
	i=1;
	while(i<=n){
		if(i%5==0){
			printf("%i\n",i);
		}
		i++;
	}

	return 0;
}
