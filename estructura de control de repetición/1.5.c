/*El usuario ingresar�, por teclado . nombre, a�os, y n�m telef�nico
hasta que el nombre sea igual a �FIN�. El programa debe indicar
si la edad en a�os es un n�mero par, o impar cada vez que se
ingresa un nombre v�lido.
*/
#include<stdio.h>
#include <string.h>

int main()
{
	
char nombre[50];
int edad;
int num;

edad;
num;

while(1){
	
printf("\ningrese su nombre (escriba la palabra FIN para terminar)\n");
scanf("%s", &nombre);

if(strcmp(nombre, "FIN") == 0) {
            break;
        }

printf("\ningrese su edad\n");
scanf("%d", &edad);

printf("\ningrese su numero de telefono\n");
scanf("%d", &num);

if(edad % 2 == 0) 
{
    printf("\n%s tiene %d anos, que es un n�mero par.\n", nombre, edad);
}
else if(edad % 2 == 1)
{
	printf("\n%s tiene %d anos, que es un numero impar.\n", nombre, edad);
}
}




return (0);
}
