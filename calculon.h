#ifndef CALCULON_H
#define CALCULON_H

//  Operation functions
//  Basic operations
double addOp(double a, double b);
double subsOp(double a, double b);
double multiOp(double a, double b);
double divOp(double a, double b);

//  Complex operations
double powOp(double base, double exponent);
double rootOp(double radicand, double index);
double modOp(double a, double b);
unsigned long long factOp(int n);
double logOp(double a);
double lnOp(double a);
double exOp(double a);

//  Trigonometric operations
double sinOp(double a);
double cosOp(double a);
double tanOp(double a);

//  Inversed Trigonometric operations
double asinOp(double a);
double acosOp(double a);
double atanOp(double a);

#endif