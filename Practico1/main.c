#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include <string.h>

int main()
{

    int x;
    int y;

    float Resultado;
    char seguir='s';
    int opcion;
    int flag1=0;
    int flag2=0;
    int isalpha(x);



    while(seguir=='s')
    {
        printf("\n----------------------------------------------\n");

        printf("\n1-Ingresar 1er operando (A=x)\n");
        printf("\n2-ingresar 2do operando (B=y)\n");
        printf("\n3-Calcular la suma (A+B)\n");
        printf("\n4-Calcular la resta (A-B)\n");
        printf("\n5-Calcular la division (A/B) \n");
        printf("\n6-Calcular la multiplicacion (A*B) \n");
        printf("\n7-Calcular el factorial (A!) \n");
        printf("\n8-Calcular todas las operaciones \n");
        printf("\n9- Salir\n");

        printf("-----------------------------------------------\n");

        scanf("%d", &opcion);

        system("cls");

        switch(opcion)

        {
        case 1:
            x=numero(x);
            flag1=1;
            break;



        case 2:
            y=numero(y);
            flag2=1;
            printf("Los numero ingresados son: %d y %d\n",x,y);
            break;

        case 3:
            if (flag1!=0 && flag2!=0 )
            {
                Resultado=Suma(x,y);

                printf("La suma es:%f\n", Resultado);
            }
            else
            {
                printf("Error!!!Reingrese los numeros!!!");
            }

            break;
        case 4:

            if (flag1!=0 && flag2!=0)
            {
                Resultado=Resta(x,y);
                printf("La resta es:%.2f\n",Resultado);
            }
            else
            {
                printf("Error!!!!Reingrese los numeros");
            }

            break;

        case 5:
            if(y>0)
            {
                Resultado=Division(x,y);
                printf("Resultado de la division:%f \n",Resultado);
            }
            else
                printf("Error!!!!! No se puede dividir, reingresar los numeros");

            break;
        case 6:
            if (flag1!=0 && flag2!=0)
            {
                Resultado=Multiplicacion(x,y);
                printf("Resultado de la multiplicacion es:%f\n", Resultado);

            }
            else
            {
                printf("Error!!! Reingrese los numeros");
            }
            break;
        case 7:
            if (flag1!=0)
            {
                Resultado=Factorial(x);
            }
            else
            {
                printf("Error!!! Reingrese el numero");
            }

            break;
        case 8:

            if(flag1!=0)
            {
                Resultado=Factorial(x);
            }



            if (flag1!=0 && flag2!=0)
            {
                Resultado=Suma(x,y);
                printf("\nLa suma de %d y %d es:%f\n", x,y,Resultado);
                Resultado=Resta(x,y);
                printf("\nLa Resta de %d y %d es:%f\n", x,y,Resultado);
                Resultado=Division(x,y);
                printf("\nLa division de %d y %d es:%f\n", x,y,Resultado);
                Resultado=Multiplicacion(x,y);
                printf("\nLa multiplicacion de %d y %d es:%f\n", x,y,Resultado);

            }


            else
            {
                printf("Error!!! Reingrese los numeros para calcular el resto de las operaciones");

            }

            break;



        case 9:
            seguir='n';
            break;


        }


    }





}
