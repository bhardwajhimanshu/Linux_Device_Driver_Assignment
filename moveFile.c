#include "headers.h"

int move()
{
	int rfd=0;
	char buffer[512]={0};
	char argv[125];
	char argv2[125];
	printf("Enter source and Destination\n");
	scanf("%s%s",argv,argv2);
	//if(argc == 2)
	{
	rfd  = open(argv,O_RDWR| O_CREAT,0666);
	//rfd  = open("testfile",O_RDWR| O_CREAT,0666);
	if(rfd<0)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	int readBytes = read(rfd,buffer,sizeof(buffer));
	if(readBytes<0)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	printf("The content of file is : %s\nthe total no of bytes read is %d ",buffer,readBytes);
	int wfd = open(argv2,O_RDWR|O_CREAT,0666);
	//int wfd = open("testfile2",O_RDWR|O_CREAT,0666);
	if(wfd<0)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	int writeBytes = write(wfd,buffer,sizeof(buffer));
	if(writeBytes<0)
	{
		perror("write");
		exit(EXIT_FAILURE);
	}
	rename(argv,argv2);
	printf("The content of file is : %s\nthe total no of bytes write is %d ",buffer,writeBytes);
	}
	return 0;
}
