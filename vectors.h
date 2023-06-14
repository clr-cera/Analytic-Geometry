#include <math.h>
#include <stdlib.h>

/*Function declarations*/
double InnerProd(double *vec1, double *vec2);

double Module(double *vec);

double PointDistance(double *p1, double *p2);

double* VecProd(double *vec1, double *vec2);

double MixedProduct(double *vec1, double *vec2, double *vec3);

double* ProdByScalar(double *vec, double scalar);

double* Proj(double *vec1, double *vec2);

int IsOrthonormal(double *vec1, double *vec2);

/*Type definitions*/
typedef double vector3[3];

typedef double point3[3];


/*All functions*/


/*Inner product function for 3 dimension vectors*/
double InnerProd(vector3 vec1, vector3 vec2){ //Takes two vectors
  double result = 0;

  for (int i = 0; i < 3; i++){
    result += vec1[i] * vec2[i];
  }

  return (result); 
}

/*Vectorial product function*/
double* VecProd(vector3 vec1, vector3 vec2){ //Takes two vectors3
  double* result;

  result  = (double *) malloc(3 * sizeof("double"));
  if (result == NULL) exit(1);

  result[0] = (vec1[1] * vec2[2]) - (vec1[2] * vec2[1]);
  result[1] = (vec1[2] * vec2[0]) - (vec1[0] * vec2[2]);
  result[2] = (vec1[0] * vec2[1]) - (vec1[1] * vec2[0]);

  return result; //Returns an address of a vector3
}

/*Vector module for 3 dimension vectors*/
double Module(vector3 vec){
  return (sqrt(InnerProd(vec,vec)));
}

/*Distance function between two points in R3*/
double PointDistance(point3 p1, point3 p2){ //Takes two points
  double sum = 0;
  
  for (int i = 0; i < 3; i++)
    sum += pow(p1[i] - p2[i], 2);
  
  return(sqrt(sum)); //Returns a double
}

/*Mixed Product function*/
double MixedProduct(vector3 vec1, vector3 vec2, vector3 vec3){ //Takes three vectors
  double* tempVector;
  double result;

  tempVector = VecProd(vec1,vec2);
  
  result = InnerProd(tempVector, vec3); 
  
  free(tempVector);
  return(result); //Returns a double
}

/*Product of a vector by a scalar*/
double* ProdByScalar(vector3 vec, double scalar){ //Takes a vector and a double
  double* result;
  result = (double *) malloc(3 * sizeof("double"));

  for (int i = 0; i < 3; i++) result[i] = vec[i] * scalar;
  
  return(result); //Returns a new vector
}

/*Projection function, it calculates the projection vector of the first vector on the second vector*/
double* Proj(vector3 vec1, vector3 vec2){ //Takes two vectors
  double* result;
  result = (double *) malloc(3 * sizeof("double"));

  double scalar;
  scalar = InnerProd(vec1, vec2) / InnerProd(vec2, vec2);

  result = ProdByScalar(vec2, scalar);

  return (result); //Returns a vector
}

//tests if any given 2 vectors are orthonormal or not, returns 1 if they are and 0 if they are not
int IsOrthonormal(vector3 vec1, vector3 vec2) //Takes two vectors
{
  if(Module(vec1) != 1) //Module of first vector must be 1
    return 0;
  if(Module(vec2) != 1)  //Module of second vector must also be 1
     return 0;
  if(InnerProd(vec1, vec2) != 0)  //Dot product of both vectors must be 0
     return 0;
  return 1; //If all tests fail, it means they are indeed orthonormal, thus 1 is returned
}





