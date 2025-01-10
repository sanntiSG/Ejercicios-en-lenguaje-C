#include<stdio.h>

/*Realizar un programa que calcule la asistencia de un estudiante, dado su estado
‘P’ ,’ A’,’ T’ , Presente no acumulara inasistencia, A acumulara 1 inasistencia, Tarde
acumulara ½ inasistencia.
*/
int main ()
//1.11 AQUI NO COMPARAMOS CARACTERES YA QUE SON PALABRAS QUE NO EMPIEZAN CON LA MISMA LETRA
{
    char alumno[50];
    char estado;
    float falta;
    falta=1;

    printf("ingrese alumno: ");
    scanf("%s",&alumno);
    printf("indique estado\n");
    scanf(" %c", &estado);
//espacio en blanco para ignorar tabulación o salto de línea pendiente
switch(estado){

case 'p':printf("El alumno %s esta presente", alumno);break;
case 'a':printf("%s esta ausente, tiene %1.f falta", alumno, falta);break;
case 't':printf("%s llego tarde, tiene %.1f falta", alumno, falta/2);break;


}

    return (0);

}

