#include <stdio.h>

int main(void)
{
float	fPrixInitial, fPrixFinal = 0.0;
char	cTypeProduit;

	printf("Veuillez saisir le prix initial suivi du type de produit :");
	scanf("%f %c", &fPrixInitial, &cTypeProduit);

	if(cTypeProduit == 'A')
		fPrixFinal = fPrixInitial - (fPrixInitial / 100) * 15;
	else if(cTypeProduit == 'B')
		fPrixFinal = fPrixInitial - (fPrixInitial / 100) * 20;
	else
	{
		printf("Erreur");
		return 1;
	}

	printf("Le prix après réduc est : %f", fPrixFinal);
		
	return 0;
}
