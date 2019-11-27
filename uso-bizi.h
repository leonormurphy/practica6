/********************************************************************************\
 * Programación 1. Práctica 5
 * Autores: Miguel Ángel Latre
 * Ultima revisión: 26 de noviembre de 2018
 * Resumen: Fichero de interfaz «bizi-usos.h» de un módulo para trabajar con
 *          registros que representan usos del sistema Bizi Zaragoza.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#ifndef BIZI_USOS_H_INCLUDED
#define BIZI_USOS_H_INCLUDED

#include <istream>
using namespace std;

/*
 * Longitud máxima de la línea de cabecera de los ficheros de usos.
 */
const int MAX_LONG_LINEA = 250;

struct UsoBizi {
    // Define los campos necesarios para representar los siguientes datos de un
    // uso del sistema Bizi: el identificador del usuario que utiliza la
    // bicicleta, el código de la estación de la que se retira la bicicleta y el
    // código de la estación en la que se devuelve.
};


/*
 * Pre:  El flujo «f» está asociado con un fichero de texto con el formato de usos
 *       del sistema Bizi establecido en el enunciado y en disposición de
 *       leer desde el principio de una línea distinta a la de la cabecera.
 * Post: Ha intentado leer la línea mencionada en la precondición y, si no se han
 *       terminado los datos del fichero en dicho intento, ha almacenado en los
 *       campos del parámetro «uso» el identificador del usuario al que
 *       corresponde la utilización de la línea leída y los códigos de las
 *       estaciones de retira y devolución de la bicicleta.
 */
void leerUso(istream& f, UsoBizi& uso);


/*
 * Pre:  La cadena de caracteres «rutaFichero» respresenta la ruta de acceso y el
 *       nombre de un fichero de texto con el formato de usos del sistema Bizi
 *       establecido en el enunciado.
 * Post: Si el fichero de nombre «rutaFichero» se ha podido abrir y leer
 *       correctamente, la función ha devuelto «true», «traslados» es el número de
 *       usos entre estaciones distintas del sistema Bizi Zaragoza contenidos en
 *       el fichero de nombre «rutaFichero» y «usosCirculares» es el número de
 *       usos contenidos en dicho fichero que tienen como origen y destino la
 *       misma estación. En caso contrario, la función ha devuelto «false».
 */
bool contarUsos(const char rutaFichero[], int& traslados, int& usosCirculares);

#endif // BIZI_USOS_H_INCLUDED
