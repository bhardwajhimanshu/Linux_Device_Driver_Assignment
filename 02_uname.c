#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>

int main()
{
	int ret=0;
	pid_t pid;

	pid = fork();
	switch(pid)
	{
		case 0:
			execl("./fork","fork",NULL);
			break;
		default:
			sleep(2);
			wait(&ret);
	}
	return 0;
}
