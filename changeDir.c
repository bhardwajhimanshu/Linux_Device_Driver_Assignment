#include "headers.h"

int changeDir()
{
	int rfd=0;
	char buffer[512]={0};
	rfd  = open("testfile",O_RDWR| O_CREAT,0666);
	if(rfd<0)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	int readBytes = read(rfd,buffer,sizeof(buffer));
	printf("The content of file is : %s\nthe total no of bytes read is %d ",buffer,readBytes);
	char argv[512];
	printf("Enter the directory you want to visit\n");
        scanf("%s",argv);
	char path[512];
	printf("The current Directory is : %s \n",getcwd(path,512));
	int ret = chdir(argv);
	if(ret < 0)
	{
		perror("chdir");
		exit(EXIT_FAILURE);
	}
	printf("The current Directory is : %s \n",getcwd(path,512));
	return 0;
}
