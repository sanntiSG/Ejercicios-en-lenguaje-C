#include<stdio.h>
/*El usuario ingresara dos números, mientras ninguno de ellos sea negativo,
 realizará la resta y la suma de los dos, y mostrará ambos resultados.
*/

int main ()
{
float numero1;
float numero2;
float suma;
float resta;

    printf("ingrese numero 1: \n");
    scanf("%f", &numero1);

    printf("ingrese numero 2: \n");
    scanf("%f", &numero2);

 if (numero1 >= 0 && numero2 >= 0) {
 suma= numero1 + numero2;
    printf("la suma entre %f y %f es: %f \n", numero1, numero2, suma);

 resta= numero1 - numero2;
    printf("la resta entre %f y %f es: %f \n", numero1, numero2, resta);

}else{
printf("ERROR. uno de los numeros ingresados es negativo");
}

    return 0;
}
