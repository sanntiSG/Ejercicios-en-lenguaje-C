#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.6

int main() {
/*Dado un número A, me indique si es par*/
int numero_a;

numero_a;

printf("Ingrese un numero A\n");
scanf("%d",&numero_a);

if(numero_a % 2 ==0){ //resto 0
    printf("El numero %d ES PAR, ya que si lo dividimos, su resto es 0", numero_a);
}
else{
    printf("ERROR, el numero %d (ingresado) NO es par", numero_a);
}
return (0);
}
