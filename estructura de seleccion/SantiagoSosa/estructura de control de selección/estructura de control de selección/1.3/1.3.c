#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.3

int main() {
/*Dado dos números A y B;restar el mayor al menor*/
float a;
float b;
float resultado;

a=0;
b=0;


printf("ingrese numero A\n");
scanf("%f", &a);

printf("ingrese numero B\n");
scanf("%f", &b);

if(a>b){
resultado=a-b;//si la consigna es restar el mayor al menor, esta bien esta sentencia?
    printf("el resultado de %f - %f es %f", a, b, resultado);
}


else if(a<b){
resultado=b-a;//lo mismo acá
    printf("el resultado de %f - %f es %f", b, a, resultado);
}



else if(a==b){
    resultado=a-b;
    printf("los numeros son iguales por lo tanto el resultado de la resta es %f", resultado);
}




return (0);

}
