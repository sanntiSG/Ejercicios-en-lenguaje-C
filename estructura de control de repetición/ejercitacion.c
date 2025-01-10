#include<stdio.h>

int main (){

int a;
int b;

a=0;
b=0;

printf("ingrese un numero a\n");
scanf("%d",&a);

printf("ingrese un numero b\n");
scanf("%d",&b);



    if(a>b)
    {//encierran el verdadero
    printf("el numero A es meyor\n");
    }
    else
    {//encierran el falso
    printf("El numero B es mayor\n");
    }



return(0);
}
