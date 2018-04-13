#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

  int suma(int x , int y){

    int resultado;
    /*
    printf(" ingrese el primer numero : \n ");
    scanf("%d",&x);

    printf(" ingrese el segundo numero : \n ");
    scanf("%d",&y);
    */

    resultado=x+y;

    return resultado;


}

int resta(int x , int y){

    int resultado;
    /*
    printf("ingrese el primer numero : \n ");
    scanf("%d",&x);

    printf("ingrese el segundo numero : \n ");
    scanf("%d",&y);
    */

    resultado=x-y;

    return resultado;


}

float division( int x , int y){        /*se pone float en la operacion  por que el resultado puede ser nro con coma*/

    float resultado;
    /*
    printf(" ingrese el primer numero : \n ");
    scanf("%d",&x);

    printf(" ingrese el segundo numero : \n ");
    scanf("%d",&y);
    */

    resultado=x/y;

    return resultado;


}

float multiplicacion(int x , int y){

    float resultado;

    /*
    printf(" ingrese el primer numero : \n ");
    scanf("%d",&x);

    printf(" ingrese el segundo numero : \n ");
    scanf("%d",&y);
    */
    resultado=x*y;

    return resultado;


}
int factorial(int x )
{

    int i; // controlador del ciclo
    int factorial=1;
    int resultado;
    /*
    printf(" ingrese el numero para hallar el factorial : \n ");
    scanf("%d",&x);
    */

    for(i=1;i<=x;i++){

        factorial = factorial*i;
        resultado = factorial;
    }


    return resultado;
}






