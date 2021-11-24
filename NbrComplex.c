#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NbrComplex.h"

complex create_alg(double a,double b)
{
	   complex comp;
	   comp.re=a;
	   comp.img=b;
	   return comp;
	}

complex  create_geom(double mo ,double arg)
{
	complex comp;
	comp.re=mo*cos(arg);
	comp.img=mo*sin(arg);
	return comp;
}

double real(complex z)
{
	return z.re;
}

double imag(complex z)
{
	return z.img;
}

double modulus(complex z)
{
	double l;
	l=sqrt((z.re)*(z.re)+(z.img)*(z.img));
	return l;
}

double argument(complex z)
{	
	return asin((z.img)/modulus(z));	
}

void display_alg(complex z)
{
	printf("le nomber complex est : %.2lf + i %.2lf \n", z.re, z.img);
}

void display_geom(complex z)
{
	printf("la representation d\'un nbr complex sous forme geometrique est : %.2lf(cos(%.2lf*PI)+isin(%.2lf*PI))",modulus(z),argument(z)/M_PI,argument(z)/M_PI);
}

complex oppos(complex z)
{
	complex comp;
	comp.re=(-1*z.re);
	comp.img=(-1*z.img);
	return comp;
}

complex conjug(complex z)
{
	complex comp;
	comp.re=(z.re);
	comp.img=(-1*z.img);
	return comp;
}

complex inverse(complex z)
{
	complex comp;
	comp.re=(z.re)/((z.re)*(z.re)+(z.img)*(z.img));
	comp.img=(-1)*(z.img)/((z.re)*(z.re)+(z.img)*(z.img));
	return comp;
}

complex power(complex z, int r)
{
	complex comp;
	double l;
	l=modulus(z);
	comp.re=l*cos(n*argument(z));
	comp.img=l*sin(n*argument(z));
	return comp;
}

complex add(complex z1,complex z2)
{
	complex comp;
	comp.re=z1.re+z2.re;
	comp.img=z1.img+z2.img;
	return comp;
}

complex sub(complex z1,complex z2)
{
	complex comp;
	comp.re=z1.re+z2.re;
	comp.img=z1.img+z2.img;
	return comp;
}

complex mul(complex z1,complex z2)
{
	complex comp;
	comp.re=real(z1)*real(z2)-imag(z1)*imag(z2);
	comp.img=real(z1)*imag(z2)+real(z2)*imag(z1);
	return comp;
}

complex dive(complex z1,complex z2)
{
	complex comp;

	comp.re=(real(z1)*real(z2)+imag(z1)*imag(z2)/(real(z2)*real(z2)+imag(z2)*imag(z2)));
	comp.img=(imag(z1)*real(z2)-real(z1)*imag(z2)/(real(z2)*real(z2)+imag(z2)*imag(z2)));
	return comp;
}


