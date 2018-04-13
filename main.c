#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1;
    int num2;
    int resultado;
    //int x;
    //int y;

    while(seguir=='s')
    {
        system("cls");

        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                //system("cls");
                printf("[num1] ingrese el primer numero de la operacion : ");
                scanf("%d",&num1);
                break;

            case 2:
                //system("cls");
                printf("[num2] ingrese el segundo numero de la operacion : ");
                scanf("%d",&num2);
                break;

            case 3:

                //system("cls");
                resultado=suma(num1,num2);
                printf(" el resultado de la suma es : %d\n ", resultado); // aca me olvide de ponerle resultado
                break;

            case 4:
                //system("cls");
                resultado=resta(num1,num2);
                printf(" el resultado de la resta es : %d\n ", resultado); // aca me olvide de ponerle resultado
                break;

            case 5:
                //system("cls");
                resultado=division(num1,num2);
                printf(" el resultado de la division es : %d\n ", resultado); // aca me olvide de ponerle resultado
                break;

            case 6:
                //system("cls");
                resultado=multiplicacion(num1,num2);
                printf(" \n el resultado de la multiplicacion es : %d\n ", resultado); // aca me olvide de ponerle resultado
                break;

            case 7:
                //system("cls");
                resultado = factorial(num1);
                printf(" el resultado del factorial es : %d\n ", resultado); // aca me olvide de ponerle resultado
                break;
                ;

            case 8:/*todas las operaciones*/

                //system("cls");
                resultado = suma (num1,num2);
                printf(" el resultado de la suma es : %d \n ", resultado);

                //system("cls");
                resultado = resta (num1,num2);
                printf(" el resultado de la resta es : %d \n ", resultado);

                //system("cls");
                resultado = division (num1,num2);
                printf(" el resultado de la division es : %d \n ", resultado);

                //system("cls");
                resultado = multiplicacion (num1,num2);
                printf(" el resultado de la multiplicacion es : %d \n ", resultado);

                //system("cls");
                resultado = factorial (num1);
                printf("el resultado de la suma es : %d \n", resultado);


                break;


            case 9:
                seguir = 'n';
                break;
        }//switch
        system("pause");
    }//while

    return 0;
}//main
