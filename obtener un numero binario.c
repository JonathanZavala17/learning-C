//convertir numero a binario

#include<stdio.h>

int main(){
	
	//2 elevado al exponente de esta manera dosUNO, dosDOS, etc
	int numero,doscero,dosuno,dosdos,dostres,doscuatro,doscinco,dosseis,dossiete,dosocho,dosnueve,dosdiez,dosonce,dosdoce,dostrece,doscatorce,dosquince,dosdieciseis;
	int valor;
	
	printf("Ingrese un numero entre 0 y 131,071: ");
	scanf("%i",&numero);
	
	valor = numero;
	
	doscero = numero%2; numero = numero/2;
	dosuno = numero%2; numero = numero/2;
	dosdos = numero%2; numero = numero/2;
	dostres = numero%2; numero = numero/2;
	doscuatro = numero%2; numero = numero/2;
	doscinco = numero%2; numero = numero/2;
	dosseis = numero%2; numero = numero/2;
	dossiete = numero%2; numero = numero/2;
	dosocho = numero%2; numero = numero/2;
	dosnueve = numero%2; numero = numero/2;
	dosdiez = numero%2; numero = numero/2;
	dosonce = numero%2; numero = numero/2;
	dosdoce = numero%2; numero = numero/2;
	dostrece = numero%2; numero = numero/2;
	doscatorce = numero%2; numero = numero/2;
	dosquince = numero%2; numero = numero/2;
	dosdieciseis = numero%2; numero = numero/2;

	switch(dosdieciseis){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}	
	switch(dosquince){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(doscatorce){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dostrece){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosdoce){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosonce){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosdiez){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}	
	switch(dosnueve){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosocho){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dossiete){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosseis){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(doscinco){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(doscuatro){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dostres){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosdos){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(dosuno){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	switch(doscero){
		case 0: printf("0"); break;
		case 1: printf("1"); break;	
	}
	
	printf("\nel numero %i es espresado como %iX65,536 + %iX32,768 + %iX16,384 + %iX8,192 + %iX4,096 + %iX2,048 + %iX1,024 + %iX512 + %iX256 + %iX128 + %iX64 + %iX32 + %iX16 + %iX8 + %iX4 + %iX2 + %iX1 ",valor, dosdieciseis, dosquince, doscatorce, dostrece, dosdoce, dosonce, dosdiez,dosnueve,dosocho,dossiete,dosseis,doscinco,doscuatro,dostres,dosdos,dosuno,doscero);
	
	return 0;
}
