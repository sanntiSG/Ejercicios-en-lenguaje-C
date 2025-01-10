#include<stdio.h>

/*
Escriba un programa donde ingrese una serie de números reales. Cuando 
encuentra un valor mayor que 283, deja de leer e informa cuantos elementos 
tiene la serie.

*/

int main() {

int num_ingresados;

printf("ingrese numeros\n");
scanf("%d", &num_ingresados);


for(num_ingresados=num_ingresados+1; num_ingresados<283; num_ingresados=num_ingresados+1)
{
	printf("%d\n", num_ingresados);
}


return 0;
}

