#include "stdafx.h"
#include "Fun.h"
#include <math.h>

long double fatorial(int n)
{
	if (n == 0) return 1;

	int r = 1;
	while (n >= 1)
	{		
		r = r*n;
		n--;
	}
	return r;
}
long double constE(long double n)
{
	long double e = 1;
	for (int i = 1; i <= n; i++)
	{
		e = e + (1 / fatorial(i));
	}
	return e;		 
}
long double constEX(long double n, long double x)
{
	long double ex = 1;
	for (int i = 1; i <= n; i++)
	{
		ex = ex + (powl(x,i)/ fatorial(i));
	}
	return ex;
}