#include<stdio.h>
/*Implementar una máquina para boleto de colectivo. Preguntará la edad, si es menor de 3 años
 o mayor de 65 ; el viaje será gratis. Cobrará con monedas de 0.25 ; 0.50 y 1.00 peso.
 Luego de su edad el usuario ingresara con que tipo de monedas pagará y con que cantidad.
  Se calcula el vuelto y se le informará.*/
int main()
{

    int edad;
    float saldo_moneda;
    int destinos=0;
    float valor_spega=3;
    float valor_suarez=5;
    float valor_ezeiza=10;
    float restaSpega;
    float restaSuarez;
    float restaEzeiza;

    printf("Hola soy una maquina de boleto de colectivos\n");
    printf("Especifica tu EDAD\n");
    scanf("%d", &edad);

    if(edad<=3 || edad >=65){

        printf("viaje gratis\n");
    }else{

    printf("Elija su destino: 1.Spegazzini(valor: 3 pesos) 2.Suarez(valor: 5 pesos) 3.Ezeiza(valor: 10 pesos)\n");
    scanf("%d", &destinos);
    printf("insertar monedas SOLO SE PERMITEN MONEDAS DE: 0.25 ; 0.50 y 1.00 pesos.\n");
    printf("ponga la cantidad de monedas\n");
    scanf("%f", &saldo_moneda);
    printf("su saldo en monedas es de %f\n", saldo_moneda);
    restaSpega= saldo_moneda - valor_spega;
    restaSuarez= saldo_moneda - valor_suarez;
    restaEzeiza= saldo_moneda - valor_ezeiza;

 switch(destinos){


 case 1: printf("su saldo de %f - el valor del viaje %f es de: %f\n", saldo_moneda, valor_spega, restaSpega);break;
 case 2: printf("su saldo de %f - el valor del viaje %f es de: %f\n", saldo_moneda, valor_suarez, restaSuarez);break;
 case 3: printf("su saldo de %f - el valor del viaje %f es de: %f\n", saldo_moneda, valor_ezeiza, restaEzeiza);break;


 }

}



return 0;
}
