/* Copyright (c) 2017 Brijesh Upadhaya */

#include <stdio.h>
#include <math.h>
#include <utils.h>
#include <module.h>


/*=============================================================================*/
/* Residual */
/*=============================================================================*/
double 
residual (int m, int n, const double **S, const double *x, const double *f) {
    
    int lenR = m;
    int lenC = n;
    const double **A = (double **) S;
    const double X = (double *) x;
    const double F = (double *) f;
    double *y = (double *) calloc ((size_t)lenC * sizeof (double)) ;

    int i, j;

    for (i = 0; i < lenR; ++i)
      {
        for (j = 0; j < lenC; ++j)
          {
            y[i] += A[i][j] * X[j];
          }
      }

    for (i = 0; i < lenR; ++i)
      {
        y[i] -= F[i];
      }

    double nres = norm (lenR, y);

    free (y);

    return nres;
}

