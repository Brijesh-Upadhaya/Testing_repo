/* Copyright (c) 2017 Brijesh Upadhaya */

#include <stdio.h>
#include <math.h>

#define FSQR(x) {(x)*(x)}


/*=============================================================================*/
/* Sum of n natural numbers (double precision) */
/*=============================================================================*/
double natural_dsum (int n) {
    
    double m = (double) n;
    double y = 0.5 * m * (m + 1);
    return y;
}

/*=============================================================================*/
/* Sum of n natural numbers (integer) */
/*=============================================================================*/
int natural_isum(int n) {
    
    int y = n * (n + 1) / 2;
    return y;
}

/*=============================================================================*/
/* Sum of square of n natural numbers (double precision) */
/*=============================================================================*/
double natural_dsum_sqr (int n) {

    double m = (double) n;
    double y = ;
    return y;

}

/*=============================================================================*/
/* Sum of square of n natural numbers (integer) */
/*=============================================================================*/
int natural_isum_sqr (int n) {

    int y = ;
    return y;

}

/*=============================================================================*/
/* L2 norm */
/*=============================================================================*/
double norm (int n, double x[]) {

    for (i = 0; i < n; ++i)
      {
        y += FSQR (x[i]);
      }

    return sqrt (y);
}


