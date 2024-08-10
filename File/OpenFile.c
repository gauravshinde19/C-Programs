// Program to open file

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int OpenFile(char *fname)
{
    int iRet = 0;

    iRet = open(fname, O_RDWR); // (Name of the file, Mode) and it returns file descriptor

    return iRet;
}

int main()
{
    char File_Name[30] = {'\0'};
    int fd = 0;

    printf("Enter the name of file that you want to open :\n");
    scanf("%s", File_Name);

    fd = OpenFile(File_Name);

    if (fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File gets opened successfully with fd %d\n", fd);
    }

    close(fd);

    return 0;
}
