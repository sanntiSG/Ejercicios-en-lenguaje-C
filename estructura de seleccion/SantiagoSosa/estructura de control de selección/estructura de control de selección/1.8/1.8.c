#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.8

/*1.8: El índice de masa corporal (IMC), se calcula dividiendo el peso en [kg] por la estatura, al cuadrado.

/*REALICE UN PROGRAMA EN DONDE SE: Indique la categoría del paciente según la siguiente tabla:

Composición Corporal             IMC

Peso inferior al normal:         menos 18.5

Normal:                          18.5 ~ 24.9

Peso superior al normal:         25 ~ 29.9

Obesidad:                        30           */

int main() {
    float peso;
    float altura;
    float imc;

    peso;//inicializar en 0?
    altura;//altura = 0;
    imc;  //imc = 0;

printf("Ingrese su peso corporal\n");
scanf("%f", &peso);

printf("Ingrese su altura\n");
scanf("%f", &altura);

imc=((peso)/(altura*altura));
 printf("su indice de masa corporal es de:%f\n", imc);

if(imc<=18.5){

    printf("Entras en la categoria de: PESO INFERIOR AL NORMAL\n");

}

else if(imc>=18.5 && imc<=24.9){

    printf("Entras en la categoria de: PESO NORMAL\n");
}

else if (imc>=24.9 && imc<=29.9){//ojo!!! imc >= 25
    printf("Entras en la categoria de: PESO SUPERIOR AL NORMAL\n");
}

else if (imc>30){//ojo!!! im>= 30
    printf("Entras en la categoria de: OBESIDAD\n");
}


return (0);
}
