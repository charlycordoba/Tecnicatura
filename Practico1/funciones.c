#include "funciones.h"

float Suma(float x, float y)

{
    float suma=0;
    suma=x+y;

    return suma;
}

float Resta(float x, float y)
{
    float resta=0;

    resta=x-y;

    return resta;

}

float Division(float x,float y)
{
    float resultado=0;
    resultado=x/y;

    return resultado;
}

float Multiplicacion (float x, float y)
{
    float  resultado=0;

    resultado=x*y;



    return resultado;

}

float Factorial(int x)
{
    int i;
    float factorial=1;
    for(i=x; i>=1 ; i--)
            {
                factorial=factorial*i;

            }
            printf("\nEl factorial de %d es %f\n",x,factorial);
            return factorial;
}

int numero (int num)
{

    printf("Ingresar operando: \n");
            scanf("%d", &num);
            return num;
}



