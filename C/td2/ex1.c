#include <stdio.h>

#define cTailleTableau 5 

int GetNombre(void)
{
int nNombre;

	printf("Veuillez saisir un nombre : ");
	scanf("%d", &nNombre);
	return nNombre;
}

int GetMax(int Tab[cTailleTableau])
{
int nIndice, nMax;

	for(nIndice = 0; nIndice < cTailleTableau; nIndice++)
	{
		if(nIndice == 0 || Tab[nIndice] > nMax)
			nMax = Tab[nIndice];
	}
	return nMax;
}

int main(void)
{
int nIndice;
int tNombre[cTailleTableau];

	for(nIndice = 0; nIndice < cTailleTableau; nIndice++)
	{
		tNombre[nIndice] = GetNombre();
	}

	printf("Le max est : %d\n", GetMax(tNombre));

	return 0;
}
