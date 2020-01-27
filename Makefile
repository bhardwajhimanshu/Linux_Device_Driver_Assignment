
command:copyFile.o moveFile.o removeFile.o main.o changeDir.o mkdir.o fileStatics.o filePermission.o changeOwner.o accessFilePermission.o sysInfo.o
	gcc -o command copyFile.o moveFile.o removeFile.o main.o changeDir.o mkdir.o fileStatics.o filePermission.o changeOwner.o accessFilePermission.o sysInfo.o

copyFile.o :copyFile.c headers.h
	gcc -c copyFile.c
moveFile.o :moveFile.c headers.h
	gcc -c moveFile.c
removeFile.o :removeFile.c headers.h
	gcc -c removeFile.c
changeDir.o :changeDir.c headers.h
	gcc -c changeDir.c
mkdir.o :mkdir.c headers.h
	gcc -c mkdir.c
main.o :main.c headers.h
	gcc -c main.c
fileStatics.o :fileStatics.c headers.h
	gcc -c fileStatics.c
filePermission.o :filePermission.c headers.h
	gcc -c filePermission.c
changeOwner.o :changeOwner.c headers.h
	gcc -c changeOwner.c
accessFilePermission.o :accessFilePermission.c headers.h
	gcc -c accessFilePermission.c
sysInfo.o :sysInfo.c headers.h
	gcc -c sysInfo.c

clean:
	rm *.o
