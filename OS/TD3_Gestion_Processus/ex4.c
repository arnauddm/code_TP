#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#define NB_FILS 10

int main(void)
{
	int tbNumPid[NB_FILS];

	for(int i = 0; i < NB_FILS; i++)
	{
		if(fork() == 0)
		{
			tbNumPid[i] = 2 * (int)getpid();
			printf("Je suis le fils n° %d de PID : %d\n", i, tbNumPid[i]);
			exit(0);
		}
	}

	return 0;
}
