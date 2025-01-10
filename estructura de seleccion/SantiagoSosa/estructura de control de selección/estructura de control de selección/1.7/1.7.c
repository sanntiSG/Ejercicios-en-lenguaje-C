#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.7

int main() {
/*Dado un número B, me indique si es impar*/
int numero_b;

numero_b;

printf("Ingrese un numero B\n");
scanf("%d",&numero_b);

if(numero_b %2 ==1){ //resto 1
    printf("El numero %d ES IMPAR, ya que si lo dividimos, su resto es 1", numero_b);
}
else{
    printf("ERROR. el numero %d (ingresado) ES par", numero_b);
}
return (0);
}
