// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long int v1 = 200000;
	long int v2;
	//a)
	long int *lPtr;
	
	//b)
	lPtr = &v1;
	
	//c)
	printf("%d\n", *lPtr);
	
	//d)
	v2 = *lPtr;
	
	//e)
	printf("%d\n", v2);
	
	//f)
	printf("%x\n", &v1);
	
	//g)
	printf("%x\n", lPtr);

	return 0;
}

