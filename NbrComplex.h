#ifndef COMPLEX_H
#define COMPLEX_H

int n;
double a,b,l,r;
typedef struct 
{
	double re;
	double img;
} complex;

complex create_alg(double re,double img);
complex create_geom(double m ,double a);

double real(complex z);
double imag(complex z);
double modulus(complex z);
double argument(complex z);

void display_algo(complex z);
void display_geom(complex z);

complex oppos(complex z);
complex conjug(complex z);
complex inverse(complex z);
complex power(complex z , int r);

complex add(complex z1,complex z2);
complex sub(complex z1,complex z2);
complex mul(complex z1,complex z2); 
complex dive(complex z1,complex z2);

#endif


