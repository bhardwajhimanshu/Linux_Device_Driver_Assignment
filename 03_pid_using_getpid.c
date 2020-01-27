#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int ret=0;
	pid_t pid=0;
	ret = fork();
	if(ret<0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if(ret >0)
	{
		printf("the pid of parent is %d : \n",getpid());
	}
	else
	printf("\nthe pid of child is %d : ",getpid());
	return 0;
}
