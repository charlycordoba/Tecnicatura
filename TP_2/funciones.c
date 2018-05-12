#include "funciones.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int menu(char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}



void cargarPersona(EPersona lista[], int tam)
{
    int i;
    int j;
    char auxNom[100];
    int auxEdad;






    for(i=0; i<tam; i++)
    {

        if(lista[i].estado==0)
        {





            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);


            for(j=0; j<tam; j++)
            {
                strcpy( auxNom,lista[i].nombre);

                if( !isalpha(auxNom[j]) )
                {
                    printf( "\nEs un numero, Reingrese el Nombre\n" );
                    printf("Ingrese Nombre: ");
                    fflush(stdin);
                    gets(lista[i].nombre);
                }
                else
                {
                    break;
                }


            }



            printf("\nIngrese edad: ");
            scanf("%d", &lista[i].edad);


            printf("\nIngrese dni: ");
            scanf("%d", &lista[i].dni);



            printf("\nIngresar dia de nacimiento");
            lista[i].fecha=fechaNacimiento();



            lista[i].estado = 1;

            break;
        }
    }

}


Efecha fechaNacimiento(void)
{
    Efecha fecha;
    printf("\nIngresar dia:\n");
    scanf("%d", &fecha.dia);
    printf("\nIngresar mes:\n");
    scanf("%d", &fecha.mes);
    printf("\nIngresar año:\n");
    scanf("%d", &fecha.anio);

    return fecha;


}

void mostrarLista(EPersona lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPersona(lista[i]);
        }

    }
}

void ordenarNombre(EPersona lista[], int tam)
{
    int i, j;

    EPersona auxNombre;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].nombre, lista[j].nombre)>0)
                auxNombre=lista[i];
            lista[i]=lista[j];
            lista[j]=auxNombre;

        }
    }


}

//-------------------------------------------------------------------------------
void mostrarPersona(EPersona pers)
{
    printf("\nNombre: %s--\nEdad:%d--\nDni:%d--\nEstado:%d--\nDia:%d--\nMes:%d--\nanio:%d\n", pers.nombre, pers.edad, pers.dni, pers.estado,pers.fecha.dia,pers.fecha.mes,pers.fecha.anio);
}

void bucarDni (EPersona lista[], int tam)
{
    int i;
    int auxDni;
    int flag=0;


    printf("Ingresar dni a buscar:\n");
    scanf("%d", &auxDni);



    for(i=0; i<tam; i++)
    {

        if(auxDni== lista[i].dni)
        {
            flag=1;
            mostrarPersona(lista[i]);
        }
        else if (flag==0)
        {
            printf("Error, no existe el dni\n");
            break;

        }




    }
}

void EliminaPers (EPersona lista[], int tam)
{
    int i;
    int auxdni;
    int estado;
    char opcion='s';
    int flag=0;
    char respuesta;

    printf("Ingresar dni de la persona a eliminar:\n");
    scanf("%d", &auxdni);



    for(i=0; i<tam; i++)
    {

        if(auxdni== lista[i].dni)
        {
            flag=1;
            printf("%c--%d--%d\n", lista[i].nombre, lista[i].dni, lista[i].edad);

            printf("Desea eliminar persona: s/n\n");
            fflush(stdin);
            respuesta=getche();

            if(respuesta=='s')
            {
                lista[i].estado=0;
                break;
            }
            else
            {
                printf("Accion cancelada");
            }

        }

    }
    if (flag==0)
    {
        printf("Error, no existe la persona\n");
    }
}

//--------------------------------------------------------------------------------

void GraficoEdades(EPersona lista[],int tam)

{
    int i;
    int menor18=0;
    int de18a35=0;
    int mas35=0;
    char menor[tam][5];
    char joven[tam][5];
    char adulto[tam][5];
    int contador=0;

  for(i=0; i<tam; i++)
     {
        strcpy(menor[i] , " ");
        strcpy(joven[i] , " ");
        strcpy(adulto[i] , " ");
     }

    for(i=0; i<tam; i++)
    {
        if (lista[i].edad <=18 && lista [i].edad >0 &&lista [i].estado ==1 )
        {
            menor18++;
        }
        else if (lista [i].edad >18&&lista [i].edad <35 &&lista [i].estado ==1 )
                 {
            de18a35++;
        }
        else if (lista [i].edad >35 &&lista [i].estado ==1 )
        {
            mas35++;
        }

    }

    for(i=0; i<menor18; i++)
    {
        if (i==0)
        {
         strcpy(menor[i] , "*");
        }
        else{
         strcpy(menor[i], "*") ;
        }

    }
    for(i=0; i<de18a35; i++)
    {
        if (i==0)
        {
            strcpy(joven[i], "*");
        }
        else
        {
           strcpy(joven[i], "*") ;
        }
    }
    for(i=0; i<mas35; i++)
    {
        if (i==0)
        {
            strcpy(adulto[i], "*");
        }
        else{
           strcpy(adulto[i], "*") ;
        }
    }
   if (menor18 <= de18a35)
   {
     contador = de18a35;
   }
   else if (de18a35<=mas35)
   {
   contador = mas35;
   }
   else
    {
     contador=menor18;
    }
    for(i=contador; i>=0; i--)
    {
      printf(" \n\t%s \t  %s\t %s", menor[i] , joven[i] , adulto[i]);
    }
  printf("\n       <18      18y35 \t>35 \n \n" );
  printf("\n----------------------------------- \n");
  cleanScreen();

}


/** \LIMPIA LA PANTALLA
 */
void cleanScreen (void)
{
            printf("\n");
            system ("pause");
            system ("cls");
}





