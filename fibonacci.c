//serie de fibonacci

#include<stdio.h>

int main(){
	int terminos, i, x=0,y=1,z=0;
	
	printf("Digite el numero de terminos: \n");
	scanf("%i",&terminos);
	
	for(i=2;i<=terminos;i++){
	//para obtener la sucesión completa
		if(x==0){
			printf(" %i , ",x);
				z=x+y;
				x=y;
				y=z;
					printf(" %i , ",y);
		}
		else{
				z=x+y;
				x=y;
				y=z;
				printf(" %i , ",x);
		}
	
	}
	
	
	//sino
	/*
	for(i=1;i<=terminos;i++){
		z=x+y;
		x=y;
		y=z;
			printf(" %i , ",x);
	}
	*/
	
	return 0;
}

/*
z=0+1
x=1
y=1

z=1+1
x=1
y=2

z=1+2
x=2
y=3

z=2+3
x=3
y=5

z=3+5
x=5
y=8

z=5+8... 13
*/
