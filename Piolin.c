#include <stdio.h>
/* 
 Descripción: Uso de variables 
 Autor: Yop
 Date: 27 11 2021
 */
 int main (void){
//valorRetorno identificador (parametros de entrada)
int piolin= 0; //estoy declarando entero e inicializando la variable  
const int silvestre = 0; //declarando constante 
#define vacio 0
//printf("Etiqueta" formatos", variable);
printf("Mi variable piolin tiene el valor de %i",piolin);
printf("\nMi variable silvestre tiene el valor de %i",silvestre);	
printf("\nMi variable vacio tiene el valor de %i",vacio);

  piolin = 100;  
  //silvestre=200 no se puede porque es constante 
  #define vacio 150

printf("\nMi variable piolin tiene el valor de %i", piolin);
printf("\nMi variable silvestre tiene el valor de %i",silvestre);
printf("\nMi variable vacio tiene el valor de %i",vacio);

}
