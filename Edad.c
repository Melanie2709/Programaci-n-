#include <stdio.h>

int main (){
    int edad=0;
    
    printf("Introduce tu edad [0-150]: ");
    scanf("%d",&edad);  //10
    // 18...34
     if(edad>17 && edad <35){
    	printf("Tienes %d anios, eres mayor de edad", edad);
    	//0...17
		}else if (edad>=0 && edad <=17){
			printf("Tienes %d anios, eres menor de edad",edad);
			//35...32605
			}else if (edad>=35 && edad <=150){
				if(edad<60){
					printf("Tienes %d anios, eres adulto",edad);
				}else{
					printf("Tienes %d anios, eres adulto mayor", edad);
				}
		} 
		else{
			printf("Introduce una edad valida [0-150]");
		}
		return 0; 
}
