#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pablo Sayago
 * Descripción: Demostrar con un programa simple que se está en capacidad de editar,
   compilar y ejecutar un programa C.
 * Pablo Sayago
 * 25/04/2023
 */

void main(){
    char cadena[10];
    strcpy(cadena,"Hello, World!");
    printf("%s",&cadena);
    guardarCadena(cadena);
    system("pause");
}

void guardarCadena(char *texto){
    FILE *fpuntero;
    char rutaArchivo[] = "output.txt";
    fpuntero= fopen(rutaArchivo,"w");
    if(fpuntero==NULL){
        printf("ERROR: Al intentar generar el archivo.\n");
        return;
    }
    fprintf(fpuntero,"%s",texto);
    fclose(fpuntero);
    printf("\n**************************************\n");
    printf("Se genero el txt correctamente");
}
