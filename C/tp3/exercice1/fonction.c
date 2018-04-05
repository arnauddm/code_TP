#include "fonction.h"

int quotient(int a, int b)
{
int s;

	for(; a > b; a -= b, s++) {}
	return s;
}

int reste(int a, int b)
{
	return a - (quotient(a, b) * b);
}

int abs(int a)
{
	if(a < 0)
		return -a;
	else
		return a;
}

int ppcm(int a, int b)
{
	return abs(a * b) / pgcd(a, b);
}

int pgcd(int a, int b)
{
int r;

	if(a < b)
		return 0;

	r = reste(a, b);
	while(r != 0)
	{
		a = b;
		b = reste;
		r = reste(a, b);
	}

	return b;
}
