// Program to create file

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int CreateFile(char *fname)
{
    int iRet = 0;

    iRet = fcreat(fname, 0777); // (Name of the file, Permission)

    return iRet;
}

int main()
{
    char File_Name[30] = {'\0'};
    int fd = 0;

    printf("Enter the name of file that you want to create :\n");
    scanf("%s", File_Name);

    fd = CreateFile(File_Name);

    if (fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File gets created successfully with fd %d\n", fd);
    }

    close(fd);
}
