#ifndef rarray_math_h
#define rarray_math_h

void function();


//#include <iostream>
//#include <rarray>
//#include <rarrayio>
//#include <vector>
//#include <netcdf>
//#include <complex>
//#include <fftw3.h>
//#include <cmath> // for pow
//#include "netCDF_reading.h"
//#include "rarray_math.h"
//#include <cblas.h>
//using namespace std;
//using namespace netCDF;

// Fast fourier transform function: performs a fast fourier transform.
// Input: f rarray
// Output: fhat rarray
rarray<complex<double>,1> fft(rarray<complex<double>,1>& f);

// This function returns an rarray of the square norms of the complex values in the rarray input
rarray<double,1> sq_norm(rarray<complex<double>,1>& fhat);

// This function calculates the correlation between two 1D rarrays via C_FG = <F,G> / sqrt(<F,F><G,G>)
double correlation(rarray<double,1>& Fk,rarray<double,1>& Gk);


#endif /* rarray_math */
