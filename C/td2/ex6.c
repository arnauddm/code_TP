#include <stdio.h>

float VersCelsius(int nF)
{
	return (nF - 32) / 1.8;
}

int main(void)
{
int nIndice;

	for(nIndice = 0; nIndice <= 300; nIndice += 10)
	{
		printf("La température %d °F vaut %f °C\n", nIndice, VersCelsius(nIndice));
	}

	return 0;
}
