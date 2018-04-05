#include <stdio.h>

#define true 1
#define false 0

int Ouvrir(FILE *fichier, char chemin[]);
void Fermer(FILE *fichier);
int LireDonnees(char nomFichier[], int T[]);

int main(void)
{
	int *nTableau = (int *)malloc(255 * sizeof(int));
	char szCheminFichier[] = "fichier.txt";
	printf("%d\n", LireDonnees(szCheminFichier, *nTableau));
	return 0;
}

int Ouvrir(FILE *fichier, char chemin[])
{
	fichier = fopen("fichier.txt", "r");

	if(fichier != NULL)
	{
		printf("Succès\n");
		return true;
	}
	else
	{
		printf("Erreur\n");
		return false;
	}
}

void Fermer(FILE *fichier)
{
	fclose(fichier);
}

int LireDonnees(char nomFichier[], int T[])
{
FILE *fichier = NULL;
int nIndice;

	if(Ouvrir(fichier, *nomFichier) == false)
	{
		printf("Erreur d'ouverture du fichier\n");
		return 0;
	}
	else
		printf("Ouverture avec succès du fichier\n");

	printf("Avant");
	nIndice = 0;
	
	while(!feof(fichier))
	{
		fscanf(fichier, "%d", &nIndice);
		printf("%d\t%d\n", nIndice, feof(fichier));
	}
	printf("Apres");

	for(nIndice = 0; nIndice < (sizeof(T) / sizeof(int)); nIndice++)
	{
		if(T[nIndice] == "")
			break;
	}
	Fermer(fichier);
	return nIndice;
}
