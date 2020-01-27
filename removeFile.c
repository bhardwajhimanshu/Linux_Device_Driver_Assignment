#include "headers.h"

int removeFile()
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
	char path[512];
	printf("Enter file to remove\n");
        scanf("%s",argv);
	int ret = unlink(argv);
	if(ret < 0)
	{
		perror("unlink");
		exit(EXIT_FAILURE);
	}
	return 0;
}
