#include<stdio.h>
/*Elabore un programa donde ingresan dos valores reales y el s�mbolo de la
Operaci�n (�+�, �-�, �*�, �/�). Se deber� presentar por pantalla, los datos
ingresados, la operaci�n y el resultado. Si el s�mbolo utilizado no correspondiera
a ninguna de las cuatro operaciones deber� presentar un mensaje de
�Operaci�n NO V�lida�.  (El programa deber� resolverse mediante el uso de la
estructura switch).
*/

int main()
{

float valor1;
float valor2;
char operacion;
float suma;
float resta;
float mult;
float div;

printf("ingrese primer valor\n");
scanf("%f", &valor1);

printf("ingrese segundo valor\n");
scanf("%f", &valor2);

printf("ingrese operacion= (+, -, *, /) \n");
scanf("%s", &operacion);

suma= valor1 + valor2;
resta= valor1 - valor2;
mult= valor1 * valor2;
div= valor1 / valor2;


switch(operacion){

case '+': printf("la suma entre %f y %f es de: %f\n", valor1, valor2, suma);break;
case '-': printf("la resta entre %f y %f es de: %f\n", valor1, valor2, resta);break;
case '*': printf("la multiplicacion entre %f y %f es de: %f\n", valor1, valor2, mult);break;
case '/': printf("la division entre %f y %f es de: %f\n", valor1, valor2, div);break;
default : printf("Operaci�n NO V�lida"); break;
}



return 0;
}
