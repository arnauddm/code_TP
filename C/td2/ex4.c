#include <stdio.h>

int main(void)
{
int nNombre, nIndice;

	printf("Saisir le numéro du jour :");
	scanf("%d", &nNombre);
	
	nIndice = nNombre % 7;
	switch(nIndice)
	{
		case 4:
			printf("Lundi");
			break;
		case 5:
			printf("Mardi");
			break;
		case 6:
			printf("Mercredi");
			break;
		case 7:
			printf("Jeudi");
			break;
		case 1: 
			printf("Vendredi");
			break;
		case 2:
			printf("Samedi");
			break;
		case 3:
			printf("Dimanche");
			break;
		default:
			printf("Erreur");
			break;
	}
	return 0;
}
