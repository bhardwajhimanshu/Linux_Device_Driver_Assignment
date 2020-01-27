#include"headers.h"


int changeOwner()
{
    char path[100];
    char perm[10];

    printf("Enter source file path: ");
    scanf("%s", path);
    
    if(chown(path,25,0) == 0)
    //if(chmod(path,atoi(perm)) == 0)
    {
	    printf("Owner has been changed\n");
    }
    else
    {
    	perror("chown");
	exit(EXIT_FAILURE);
    }
    return 0;

}

