#include<stdio.h>

/*Un usuario ingresara día y mes de nacimiento,
 el programa informará, su signo del zodiaco.
*/

int main ()
{
int dia;
int mes;


printf("ingrese su dia de nacimiento\n");
scanf("%d", &dia);

printf("ingrese su mes de nacimiento\n");
scanf("%d", &mes);


if(mes==1 && dia>=20 || mes==2 && dia<=19){

    printf("acuario");
}else if (mes==2 && dia>19 || mes==3 && dia<=20){
printf("piscis\n");
}

return 0;
}
