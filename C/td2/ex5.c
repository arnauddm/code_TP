#include <stdio.h>

void Factorielle(int n)
{
int nIndice, nTotal = 1;

	if(n == 0)
		nTotal = 1;
	else
	{
		for(nIndice = 1; nIndice <= n; nIndice++)
		{
			nTotal *= nIndice;
		}
	}

	printf("Factorielle %d = %d\n", n, nTotal);
}

void Carre(int n)
{
int nIndice;

	for(nIndice = 1; nIndice <= n; nIndice++)
		printf("Le carré de %d est %d\n", nIndice, nIndice * nIndice);
}

void CarreVerif(int n)
{
int nIndice;

	for(nIndice = 1; nIndice <= n; nIndice++)
	{
		if(nIndice % 2 == 0)
			printf("Le carré de %d est %d\n", nIndice, nIndice * nIndice);
	}
}

int main(void)
{
int nNombreLu;

	printf("Saisir un nombre :");
	scanf("%d", &nNombreLu);
	Factorielle(nNombreLu);
	Carre(nNombreLu);
	CarreVerif(nNombreLu);
	return 0;
}
