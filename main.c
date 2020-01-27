#include<stdio.h>
#include "headers.h"

int main(int argc,char* argv[])
{
	printf("\t\t\t Welcome\t\t\n");
	int choice;
	printf("\nEnter your choice:\n1.Copy command\n2.Move command\n3.Remove command\n4.Change Directory\n5.make Directory\n6.File Directory Statics\n7.Change File permission\n8.Change Owner of file\n9.File Permission using access\n10.System Info \n");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
				copy(argc,argv[1],argv[2]);
				break;
			case 2:
				move();
				break;
			case 3:
				removeFile();
				break;
			case 4:
				changeDir();
				break;
			case 5:
				mkdir1();
				break;
			case 6:
				fileStat();
				break;
			case 7: 
				filePermission();
				break;
			case 8:
				changeOwner();
				break;
			case 9:
				accessFilePermission();
				break;
			case 0:
				sysInfo();
				break;
		}
	
	return 0;
}
