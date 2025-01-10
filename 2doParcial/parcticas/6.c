#include<stdio.h>
/*Elabore un programa donde ingresan dos valores reales y el símbolo de la
Operación (‘+’, ‘-’, ‘*’, ‘/’). Se deberá presentar por pantalla, los datos
ingresados, la operación y el resultado. Si el símbolo utilizado no correspondiera
a ninguna de las cuatro operaciones deberá presentar un mensaje de
“Operación NO Válida”.  (El programa deberá resolverse mediante el uso de la
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
default : printf("Operación NO Válida"); break;
}



return 0;
}
