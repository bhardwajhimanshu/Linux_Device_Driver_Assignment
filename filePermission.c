#include"headers.h"


int filePermission()
{
    char path[100];
    char perm[10];

    printf("Enter source file path: ");
    scanf("%s", path);
    
  // printf("Enter permission : ");
  // scanf("%s", perm);

    if(chmod(path,S_IRWXU|S_IRWXG) == 0)
    //if(chmod(path,atoi(perm)) == 0)
    {
	    printf("Permission has been changed\n");
    }
    else
    {
    	perror("chmod");
	exit(EXIT_FAILURE);
    }
    return 0;

}

