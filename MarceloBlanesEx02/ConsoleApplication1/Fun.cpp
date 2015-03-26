#include "Fun.h"
#include "stdafx.h"

int CalcMid(int n)
{
	if (n % 2 == 0) return 0;
	int ml = (n / 2) + 1;
	int ma = n;
	int iSoma = 1;

	bool aux = true;

	for (int i = 1; i <= ml; i++)
	{		
		for (int j = 1; j <= iSoma; j++)
		{
			for (int k = ma; k > i; k--)
			{
				if(aux) printf("%s", " ");
			}
			aux = false;
			printf("%s", "*");
		}
		iSoma += 2;
		aux = true;
		printf("\n");
	}	
	for (int i = ml; i >= 1; i--)
	{
		iSoma -= 2;
		for (int j = (iSoma -2); j >= 1; j--)
		{
			for (int k = i; k <= ma; k++)
			{
				if (aux) printf("%s", " ");
			}
			aux = false;
			printf("%s", "*");
		}
		
		aux = true;
		printf("\n");
	}

	return 0;
}