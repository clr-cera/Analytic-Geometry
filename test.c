#include "vectors.h"
#include <stdio.h>

int main(void){
  vector3 vec1, vec2;

  vec1[0] = 0;
  vec1[1] = 5;
  vec1[2] = 1;
  vec2[0] = 2;
  vec2[1] = 9;
  vec2[2] = 1;



  printf("%.2lf",innerprod(vec1, vec2));






  return (0);
}
