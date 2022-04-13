//convertir numero en romanos

#include<stdio.h>
#include<math.h>

int main(){
	
	int numero, unidades,decenas,centenas,millares,decillares,centillares,millon;
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
	decillares = numero%10; numero = numero/10;
	centillares = numero%10; numero = numero/10;
	millon = numero%10; numero = numero/10;
	
	//f para 1,000,000 alt 237
	
	switch(millon){
		case 1: printf("%c| ",237); break;
		case 2: printf("%c%c| ",237,237); break;
		case 3: printf("%c%c%c| ",237,237,237); break;
	
	}
	
	//p para 100,000 alt 227 
	//S para 500,000 alt 228
	//f para 1,000,000 alt 237
	
	switch(centillares){
		case 1: printf("%c| ",227); break;
		case 2: printf("%c%c| ",227,227); break;
		case 3: printf("%c%c%c| ",227,227,227); break;	
		case 4: printf("%c%c| ",227,228); break;
		case 5: printf("%c| ",228); break;
		case 6: printf("%c%c| ",228,227); break;
		case 7: printf("%c%c%c|",228,227,227); break;
		case 8: printf("%c%c%c%c| ",228,227,227,227); break;
		case 9: printf("%c%c| ",227,237); break;
	}
	
	//µ para 10,000 alt 230
	//O para 50,000 alt 234
	//p para 100,000 alt 227
	
	switch(decillares){
		case 1: printf("%c| ",230); break;
		case 2: printf("%c%c| ",230,230); break;
		case 3: printf("%c%c%c| ",230,230,230); break;	
		case 4: printf("%c%c| ",230,234); break;
		case 5: printf("%c| ",234); break;
		case 6: printf("%c%c| ",234,230); break;
		case 7: printf("%c%c%c|",234,230,230); break;
		case 8: printf("%c%c%c%c| ",234,230,230,230); break;
		case 9: printf("%c%c| ",230,227); break;
	}
	
	//v para 5,000 alt 251
	//µ para 10,000 alt 230
	
	switch(millares){
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MMM"); break;	
		case 4: printf("M%c| ",251); break;
		case 5: printf("%c| ",251); break;
		case 6: printf("%c| M",251); break;
		case 7: printf("%c| MM",251); break;
		case 8: printf("%c| MMM",251); break;
		case 9: printf("M%c| ",230); break;	
	}

	switch(centenas){
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC"); break;
		case 9: printf("CM"); break;
	}
	
	switch(decenas){
		case 1: printf("X"); break;
		case 2: printf("XX"); break;
		case 3: printf("XXX"); break;
		case 4: printf("XL"); break;
		case 5: printf("L"); break;
		case 6: printf("LX"); break;
		case 7: printf("LXX"); break;
		case 8: printf("LXXX"); break;
		case 9: printf("XC"); break;
	}
	
	switch(unidades){
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
		case 6: printf("VI"); break;
		case 7: printf("VII"); break;
		case 8: printf("VIII"); break;
		case 9: printf("IX"); break;	
	}
	
	printf("\nel numero es: %i unidades, %i decenas, %i centenas, %i millares, %i decillares, %i centillares, %i millon ",unidades,decenas,centenas,millares,decillares,centillares,millon);
	printf("\nel numero es: %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240);
	
	return 0;
}
