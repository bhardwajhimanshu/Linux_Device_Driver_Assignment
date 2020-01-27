#include"headers.h"


int accessFilePermission()
{
    char path[100];

    printf("Enter source file path: ");
    scanf("%s", path);
    

    if(access(path,F_OK) == 0)
    {
	    printf("File Found!!!\n");
    }
    if(access(path,R_OK) == 0)
    {
	    printf("File have read permission!!!\n");
    }
    if(access(path,W_OK) == 0)
    {
	    printf("File have write permission!!!\n");
    }
    else
    {
    	perror("access");
	exit(EXIT_FAILURE);
    }
    return 0;

}

