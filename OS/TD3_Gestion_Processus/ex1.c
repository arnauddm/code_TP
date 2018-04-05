#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int tbPid[2];
	if(fork() == 0) // Je suis un fils
	{
		tbPid[0] = (int)getpid();
		printf("Je suis le fils de PID : %d\n", tbPid[0]);
		sleep(4);
	}
	else if(fork() == 0) // Fils
	{
		tbPid[1] = (int)getpid();
		printf("Je suis le fils de PID : %d\n", tbPid[1]);
		sleep(2);
	}
	else // Père
	{
		printf("Je suis le père de PID : %d et je m'endors\n", (int)getpid());
		waitpid(tbPid[0], NULL, 0);
		printf("Je me réveille\n");
	}

	printf("### FIN ###\n");


	return 0;
}
