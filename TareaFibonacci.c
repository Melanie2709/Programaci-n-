#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y,z,cont,stop;

  x=0;
  y=1;
  z=0;
 
  printf("Cuantos numeros deseas: ");
  scanf("%d", &stop);

  for (cont=0;cont<stop;cont++){
     printf("%d\n",z);
      x=y;  //x=1
      y=z;  //y=2
      z=x+y;
  }
  return 0;
}
