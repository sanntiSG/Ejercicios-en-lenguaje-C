#include<stdio.h>
//ejercitacion https://docs.google.com/document/d/1dx0P3Ski2rqJ4ItWX25sZeVYO8h5Z_214YrzPv4CkJQ/edit//
//ejercicio 1.1

int main (){
    //cual es el mayor?//

float a;
float b;

a=0;
b=0;

printf("ingrese un numero a\n");
scanf("%f",&a);

printf("ingrese un numero b\n");
scanf("%f",&b);



    if(a>b)
    {//encierran el verdadero
    printf("el numero %f es mayor que %f", a, b);
    }

    else if(a==b)
    {
        printf("Son iguales, el numero %f es igual a %f", a,b);
    }

    else
    {//encierran el falso
    printf("El numero %f, a es mayor que %f", b, a);

    }


return(0);
}
