#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.5

int main() {
/*Realiza un programa que Dado la longitud de los lados de un triángulo
me indique si es isósceles, equilátero, o escaleno*/

int lado1;
int lado2;
int lado3;


lado1=0;
lado2=0;
lado3=0;


printf("ingrese lado 1 del triangulo\n");
scanf("%d", &lado1);


printf("ingrese lado 2 del triangulo\n");
scanf("%d", &lado2);

printf("ingrese lado 3 del triangulo\n");
scanf("%d", &lado3);

if (lado1==lado2  && lado2==lado3){
    printf("Este es un triangulo: EQUILATERO\n");
}

else if (lado1==lado2 && lado2 !=lado3){
    printf("Este es un triangulo: ISOSCELES\n");
}


else if (lado1==lado3 && lado2!=lado1){
    printf("Este es un triangulo: ISOSCELES\n");
}


else if (lado2==lado3){
    printf("Este es un triangulo: ISOSCELES\n");
}


else{
    printf("Este es un triangulo: ESCALENO\n");
}
return (0);
}
