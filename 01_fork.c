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
	switch(ret)
	{
		case 0:
			printf("\nthe pid of child is %d : ",ret);
			break;
		default:
			printf("the pid of parent is %d : \n",ret);
	}
	return 0;
}
