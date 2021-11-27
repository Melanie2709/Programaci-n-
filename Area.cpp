#include <stdio.h>
int main (){//Funcion principal 
  //variables
  //tipoDato identificador; 
  float area; //3.14, 0.10, 0.000001 10.0
  float radio; //Declaracion variables 
  float PI = 3.1416;
  
  radio = 5; //Asignacion de valores 
  area = PI *(radio * radio); //Operacion 
  //area = 3.1416 *(5*5);
  
  printf("area\n"); //Impresion
  printf("%s%f\n\n","Area de circulo con radio 5;",area); //Impresion
  return 0;
}
