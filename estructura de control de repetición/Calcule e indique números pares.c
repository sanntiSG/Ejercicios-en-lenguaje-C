#include<stdio.h>
//1.1 Calcule e indique números pares entre 0 y 25
int main()

int repetidor;

printf("ingrese un numero\n");
scanf("%d", &repetidor);

for(repetidor=0; repetidor<=50; repetidor++);{
if(repetidor % 2 == 0)
printf("numeros pares:%d\n", repetidor);

return(0);
}
