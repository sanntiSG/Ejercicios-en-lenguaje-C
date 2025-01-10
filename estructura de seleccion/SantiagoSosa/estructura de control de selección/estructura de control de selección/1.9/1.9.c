#include <stdio.h>
//El usuario indicará el tipo de vehículo , y el programa le indicará el monto a cobrar en un peaje.
/*ANALIZAMOS CARACTER POR CARACTER PARA QUE NO SOLO ANALIZE LA PRIMERA LETRA, ADEMAS
AL ESCRIBIR CAMIONETA EL PROGRAMA SE CONFUNDIRA Y COMO CAMIoneta comienza como CAMIon, agregamos mas 
caracteres para que analice toda la palabra, ya que no son nombres muy largos*/
int main()
{
    char vehiculo[10];

    printf("Indique su vehiculo: moto, auto, camioneta o camion\n");
    scanf("%s", vehiculo);
                //comparacion de caracteres
    if (vehiculo[0] == 'm' && vehiculo[1] == 'o' && vehiculo[2] == 't' && vehiculo[3] == 'o' && vehiculo[4] == '\0')
    {
        printf("El valor de la moto es de $200\n");
    }
    else if (vehiculo[0] == 'a' && vehiculo[1] == 'u' && vehiculo[2] == 't' && vehiculo[3] == 'o' && vehiculo[4] == '\0')
    {
        printf("El valor del auto es de $400\n");
    }
    else if (vehiculo[0] == 'c' && vehiculo[1] == 'a' && vehiculo[2] == 'm' && vehiculo[3] == 'i' && vehiculo[4] == 'o' && vehiculo[5] == 'n' && vehiculo[6] == 'e' && vehiculo[7] == 't' && vehiculo[8] == 'a' && vehiculo[9] == '\0')
    {
        printf("El valor de la camioneta es de $500\n");
    }
    else if (vehiculo[0] == 'c' && vehiculo[1] == 'a' && vehiculo[2] == 'm' && vehiculo[3] == 'i' && vehiculo[4] == 'o' && vehiculo[5] == 'n' && vehiculo[6] == '\0')
    {
        printf("El valor del camion es de $1000\n");
    }
    else
    {
        printf("Vehiculo no reconocido\n");
    }

    return 0;
}

