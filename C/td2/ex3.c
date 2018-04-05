#include <stdio.h>

int main(void)
{
int n1, n2 = 0;
char cOperation;

	printf("Saisir un nombre suivi de l'opération puis d'un autre nombre : ");
	scanf("%d %c %d", &n1, &cOperation, &n2);

	switch(cOperation)
	{
		case '+':
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			break;
		case '-':
			printf("%d - %d = %d\n", n1, n2, n1 - n2);
			break;
		case '*':
			printf("%d * %d = %d\n", n1, n2, n1 * n2);
			break;
		case '/':
			printf("%d / %d = %d\n", n1, n2, n1 / n2);
			break;
		case '%':
			printf("%d mod %d = %d\n", n1, n2, n1 % n2);
			break;
		default:
			printf("Erreur");
			break;
	}

	return 0;
}
