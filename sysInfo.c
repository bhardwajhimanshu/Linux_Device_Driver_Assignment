#include"headers.h"


int sysInfo()
{
    char path[100];
    struct sysinfo info;

    sysinfo(&info);
    printf("The Total usable RAM memory Size is %ld \n",info.totalram);
    printf("The Total free RAM memory Size is %ld \n",info.freeram);
    printf("The Total shared memory Size is %ld \n",info.sharedram);
    printf("The Total swap memory Size is %ld \n",info.totalswap);
    printf("The Number of process  is %d \n",info.procs);
	
    return 0;
}

