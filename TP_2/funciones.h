#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



typedef struct
{
    int dia;
    int mes;
    int anio;
}Efecha;

typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;
    Efecha fecha;

} EPersona;

/** \brief Muestra un menu de opciones.
 *
 * \param Recibe lo que ingresa por teclado como opcion.
 * \param
 * \return Devuelve un entero.
 *
 */

int menu(char texto[]);

/** \brief Carga los datos de una persona.
 *
 * \param Se llama a la estructura Epersona, se le asigna un nombre y se le pasa la cantidad.
 * \param
 * \return devuelve 1 si fue cargado los datos y sale.
 *
 */

void cargarPersona(EPersona lista[], int);

/** \brief Mostrar la lista de usuarios.
 *
 * \param Se le pasa un array de los usuarios ingresados y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void mostrarLista(EPersona lista[], int);

/** \brief Ordenar los nombres de los usuarios alfabeticamente.
 *
 * \param recibe un array de lista y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void ordenarNombre(EPersona lista[], int);

/** \brief Muestra una persona.
 *
 * \param Recibe un array de lista de usuarios y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void mostrarPersona(EPersona);

/** \brief Busca Un usuario por dni y si lo encuentra lo muestra.
 *
 * \param Se le pasa un array de listado de usuarios y la cantidad de usuarios.

 * \param
 * \return No devuelve nada.
 *
 */

void bucarDni (EPersona lista[], int tam);

/** \brief Busca un usuario para eliminar.
 *
 * \param Se le un array de lista de usuarios y cantidad de usuarios.
 * \param busca por dni del usaurio, lo encuentra y pregunta si lo elimina.
 * \return No devuelve nada.
 *
 */

void EliminaPers (EPersona lista[], int tam);

/** \brief Se llama a la estructura Efecha y se le asigna un nombre de referencia.
 *
 * \param no se le pasa nada
 * \param
 * \return No devuelve nada.
 *
 */

 Efecha fechaNacimiento(void);

 /** Limpia LA PANTALLA
 */
void cleanScreen (void);

/** \brief Grafico de que muestra la edad de los usuarios
 *
 * \param Vector Estructura de personas
 * \param tamanio del array de personas
 * \return void
 *
 */

 void GraficoEdades(EPersona lista[],int tam);

 void validacionNumero(EPersona lista[],int tam);


#endif // FUNCIONES_H_INCLUDED
