#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y,z,cont,stop;

  x=0;
  y=1;
  z=0;
 
  printf("Cuantos numeros deseas: ");
  scanf("%d", &stop);

  //printf("0\n1\n");
  //for(inicio; paro; incremento/decremento){}
 
  printf("0\n1\n");
  for (cont=1;cont<=stop-2;cont++){
      
      z=x+y;  //z = 1 + 1= 2
      x=y;  //x=1
      y=z;  //y=2
      printf("%d\n",z);
  }
  
 
 
  return 0;
}
