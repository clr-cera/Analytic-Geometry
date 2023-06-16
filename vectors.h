#ifndef VECTORS_H_

#define VECTORS_H_

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

void printVector(double *vec);

double* VectorSum(double *vec1, double *vec2);

double* OppositeVector(double *vec);

/*Type definitions*/
typedef double vector3[3];

typedef double point3[3];



#endif
