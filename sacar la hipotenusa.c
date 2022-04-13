//sacar la hipotenusa

#include<stdio.h>
#include<math.h>

int main(){
	
	//para numeros enteros
	int cAdy, cOpst, cAdy1, cOpst1, hipotenusa=0, hipotenusa1=0;
	
	printf("Para numeros enteros: ");
	printf("\ningrese el cateto adyacente: ");
	scanf("%i",&cAdy);
	printf("ingrese el cateto opuesto: ");
	scanf("%i",&cOpst);
	
	//modo canernicola
	hipotenusa=sqrt((cAdy*cAdy)+(cOpst*cOpst));
	printf("\nel lado de la hipotenusa equivale a: %i",hipotenusa);
	
	printf("\ningrese el cateto adyacente y opuesto respectivamente: ");
	scanf("%i %i",&cAdy1,&cOpst1);
	
	//modo estilistico
	hipotenusa1=sqrt(pow(cAdy1,2)+pow(cOpst1,2));
	printf("\nel lado de la hipotenusa equivale a: %i",hipotenusa1);
	
	
	
	//para todo numero natural
	float cAdy2, cOpst2, cAdy3, cOpst3, hipotenusa2=0, hipotenusa3=0;
	printf("\nPara todo numero real: ");
	printf("\ningrese el cateto adyacente: ");
	scanf("%f",&cAdy2);
	printf("ingrese el cateto opuesto: ");
	scanf("%f",&cOpst2);

	//modo canernicola
	hipotenusa2=sqrt((cAdy2*cAdy2)+(cOpst2*cOpst2));
	printf("\nel lado de la hipotenusa equivale a: %.4f",hipotenusa2);
	
	//modo estilistico
	printf("\ningrese el cateto adyacente y opuesto respectivamente: ");
	scanf("%f %f",&cAdy2,&cOpst2);
	
	//resultados
	hipotenusa3=sqrt(pow(cAdy2,2)+pow(cOpst2,2));
	printf("\nel lado de la hipotenusa equivale a: %.4f",hipotenusa3);


	return 0;
}
