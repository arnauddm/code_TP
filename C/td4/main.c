#include <stdio.h>

struct StructTableau
{
	int nElement;
	int *pTableau;
};

struct StructTableau CreerTableauDynamique(void);
struct StructTableau CreerTableauDouble(struct StructTableau TabSimple);
void AfficherTableau(struct StructTableau Tab);

int main(void)
{
int nIndiceTableau;

	struct StructTableau TabSimple = CreerTableauDynamique();

	printf("Affichage du tableau simple\n");
	AfficherTableau(TabSimple);

	struct StructTableau TabDouble = CreerTableauDouble(TabSimple);
	printf("Affichage du tableau double\n");
	AfficherTableau(TabDouble);

	printf("On nettoie la mémoire avant de quitter\n");
	free(TabSimple.pTableau);
	free(TabDouble.pTableau);
	return 0;
}

struct StructTableau CreerTableauDynamique(void)
{
struct StructTableau MaStruct;
int nIndiceTableau;
	
	printf("Veuillez saisir le nombre d'entier à créer :\n\t> ");
	
	scanf("%d", &MaStruct.nElement);
	MaStruct.pTableau = (int *)malloc(MaStruct.nElement * sizeof(int));
	
	printf("Remplissage du tableau\n");
	for(nIndiceTableau = 0; nIndiceTableau < MaStruct.nElement; nIndiceTableau++)
	{
		MaStruct.pTableau[nIndiceTableau] = nIndiceTableau;
	}

	return MaStruct;
}


struct StructTableau CreerTableauDouble(struct StructTableau TabSimple)
{
struct StructTableau TabDouble;
int nIndiceTableau;

	TabDouble.nElement = TabSimple.nElement;
	TabDouble.pTableau = (int *)malloc(TabDouble.nElement * sizeof(int));
	
	for(nIndiceTableau = 0; nIndiceTableau < TabDouble.nElement; nIndiceTableau++)
	{
		TabDouble.pTableau[nIndiceTableau] = TabSimple.pTableau[nIndiceTableau] * 2;
	}

	return TabDouble;
}

void AfficherTableau(struct StructTableau Tab)
{
int nIndiceTableau;

	for(nIndiceTableau = 0; nIndiceTableau < Tab.nElement; nIndiceTableau++)
	{
		printf("%d\n", Tab.pTableau[nIndiceTableau]);
	}
}
