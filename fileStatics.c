#include"headers.h"

void fileProperties(struct stat stats);

int fileStat()
{
    char path[100];
    struct stat stats;

    printf("Enter source file path: ");
    scanf("%s", path);

    if (stat(path, &stats) == 0)
    {
        fileProperties(stats);
    }
    else
    {
        printf("Unable to get file properties.\n");
        printf("Please check whether '%s' file exists.\n", path);
    }

    return 0;
}

/**
 * Function to print file properties.
 */
void fileProperties(struct stat stats)
{
    struct tm dt;

    // File permissions
    printf("\nFile access: ");
    if (stats.st_mode & R_OK)
        printf("read ");
    if (stats.st_mode & W_OK)
        printf("write ");
    if (stats.st_mode & X_OK)
        printf("execute");

    // File properties
    printf("\nFile size: %ld", stats.st_size);
    printf("\nFile id: %ld", stats.st_dev);
    printf("\nFile inode No: %ld", stats.st_ino);
    printf("\nNo of Hard links: %ld", stats.st_nlink);
    printf("\nUser Id of owner: %d", stats.st_uid);
    printf("\nTotal Size in Bytes: %ld", stats.st_size);

    // Get file creation time in seconds and
    // convert seconds to date and time format
    dt = *(gmtime(&stats.st_ctime));
    printf("\nCreated on: %d-%d-%d %d:%d:%d\n", dt.tm_mday, dt.tm_mon, dt.tm_year + 1900,
                                              dt.tm_hour, dt.tm_min, dt.tm_sec);

    // File modification time
    dt = *(gmtime(&stats.st_mtime));
    printf("\nModified on: %d-%d-%d %d:%d:%d\n", dt.tm_mday, dt.tm_mon, dt.tm_year + 1900,
                                              dt.tm_hour, dt.tm_min, dt.tm_sec);

}
