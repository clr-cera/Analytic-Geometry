#include <math.h>

/*Functions*/
double innerprod(double *vec1, double *vec2);

double module(double *vec);

typedef double vector3[3];


double innerprod(double* vec1, double* vec2){
  double result = 0;

  for (int i = 0; i < 3; i++){
    result += vec1[i] * vec2[i];
  }

  return (result); 
}

double* vecprod(double* vec1, double* vec2){
  double* result; 





  return result;
}

double module(double* vec){
  return (sqrt(innerprod(vec,vec)));
}
