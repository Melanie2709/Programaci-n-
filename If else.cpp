#include <stdio.h>
//Descripcion dependiendo de la edad se mostrata cierta información


int edad; 


int main(){
	
	printf("\nDame tu edad");
	scanf("%d, &edad");
	
	if(edad< 18){
		//Bloque1
		printf("\nEres generacion z",edad);
	}else if (edad > 14){
	     //Bloque2
	     printf("\nEres generacion alpha",edad);
	}else if (edad > 50){
		printf("\nEres generacion baby boomer",edad);
	     //Bloque3
	 }
	 else{
	 	//Bloque4
	 	printf("\nEres generacion millenial",edad);
	 	
	 }
	 }


