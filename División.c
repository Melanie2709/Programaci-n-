#include <stdio.h>

/* 
Autor: Melanie V 
Descripcion: División entre dos numeros enteros 
*/

int num1 = 10; 
int num2 = 5;
int resultado = 0; 

int main (){
// Operacion 
printf("\t\n Division entre dos numeros");
printf("\n------------------------------\n");
printf("Dame el primer numero:");
scanf("%d",&num1);
printf("Dame el segundo numero:");
scanf("%d",&num2);
if (num2==0){
	printf("la division entre 0 no esta definida");
	}else{
	resultado = num1 / num2; 
printf("\n\tEl resultado de dividir %d entre %d es %d\n", num1, num2, resultado);
}
printf("\n\tFIN DEL PROGRAMA\n");
return 0; 
}

