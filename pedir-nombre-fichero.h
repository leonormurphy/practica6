/*********************************************************************************
 * Programación 1. Práctica 5
 * Autor: Miguel Ángel Latre Abadía
 * Ultima revisión: 27 de noviembre de 2019
 * Resumen: Fichero de interfaz «pedir-nombre-fichero-h» de un módulo que declara
 *          una función denominada «pedirNombreFichero» que facilita la labor de
 *          convertir el nombre de un fichero solicitado al usuario en una ruta de
 *          acceso relativa al directorio de ejecución del proyecto solicitado 
 *          en esta tarea y en la siguiente. 
 * Codificación de caracteres original de este fichero: UTF-8 sin BOM
\********************************************************************************/

#ifndef PEDIR_NOMBRE_FICHERO_H_INCLUDED
#define PEDIR_NOMBRE_FICHERO_H_INCLUDED

const int MAX_LONG_NOMBRE_FICHERO = 200;
const char RUTA_RELATIVA[] = "../../datos/";

/*
 * Pre:  «nombreRelativo» una dimensión suficiente como para albergar una ruta
 *       relativa a un fichero cuyo nombre escriba el usuario.
 * Post: Ha solicitado al usuario el nombre de un fichero de usos del sistema
 *       Bizi, lo ha leído de teclado y ha asignado a «nombreRelativo» una ruta
 *       de acceso relativa al mismo, constente en la concatenación de la cadena
 *       «RUTA_RELATIVA» y el nombre de fichero leído de teclado.
 */
void pedirNombreFichero(char nombreRelativo[]);

#endif // PEDIR_NOMBRE_FICHERO_H_INCLUDED