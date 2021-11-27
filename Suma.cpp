#include <stdio.h>
#include <math.h>
/*
Descripción: Sumar dos numeros reales 
Author: Taller de Programacion 
*/
/*
1.- Dos variables enteras
2.- Asignacion de valores 
3.- Hacer la operacion 
*/
int main (void){
	//Declaracion de variable 
	int num1, num2, resultado; 
	//Asignacion de valores 
	num1= 10;
	num2= 40; 
	 
	//Operacion 
	resultado = num1 + num2; 
	
	printf("El resultado de la suma de %d + %d es igual a %d\n", num1, num2, resultado);
	// fin 
	
	
	printf("%d antes de incremento:", num1);
	++num1;
	printf("%d despues de incremento", num1);
	num1++;
	
	return 0; 
	
}
