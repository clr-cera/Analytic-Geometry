#include <math.h>
#include <stdlib.h>

/*Function declarations*/
double innerprod(double *vec1, double *vec2);

double module(double *vec);

double pointDistance(double *p1, double *p2);

double* vecprod(double *vec1, double *vec2);


/*Type definitions*/
typedef double vector3[3];

typedef double point3[3];


/*All functions*/


/*Inner product function for 3 dimension vectors*/
double innerprod(vector3 vec1, vector3 vec2){
  double result = 0;

  for (int i = 0; i < 3; i++){
    result += vec1[i] * vec2[i];
  }

  return (result); 
}

/*Vectorial product function*/
double* vecprod(vector3 vec1, vector3 vec2){
  double* result;

  result  = (double *) malloc(3 * sizeof("double"));
  if (result == NULL) exit(1);

  result[0] = (vec1[1] * vec2[2]) - (vec1[2] * vec2[1]);
  result[1] = (vec1[2] * vec2[0]) - (vec1[0] * vec2[2]);
  result[2] = (vec1[0] * vec2[1]) - (vec1[1] * vec2[0]);

  return result;
}

/*Vector module for 3 dimension vectors*/
double module(vector3 vec){
  return (sqrt(innerprod(vec,vec)));
}

/*Distance between two points in R3*/
double pointDistance(point3 p1, point3 p2){
  double sum = 0;
  
  for (int i = 0; i < 3; i++)
    sum += pow(p1[i] - p2[i], 2);
  
  return(sqrt(sum));
}


