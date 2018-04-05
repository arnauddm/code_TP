#include <stdio.h>

int main(void)
{
	int nNombre;

	printf("Nombre ? ");
	scanf("%d", &nNombre);

	char nombre[] = { nNombre };

	printf("%s", nombre);
	return 0;
}
