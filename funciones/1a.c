#include<stdio.h>
/*Realizar una función que:
Reciba un número y muestre un mensaje indicando si es positivo o negativo, 0*/

//recibe //nombre //devuelve
void funcion(int);


int main ()
{
  funcion(-5);
  return(0);
}

void funcion(int numero)
{
    if (numero>0)
    {
        printf("el numero es positivo\n");
    }

    else if(numero<0)
    {
        printf("el numero es negativo\n");
    }

    else
    {
        printf("el numero es igual a 0\n");
    }


}







