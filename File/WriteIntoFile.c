// Program to write the data into the file

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

int WriteFile(int iRet, char *fdata, int fbytes)
{
    iRet = write(iRet, fdata, fbytes); // (File discriptor, data, bytes)

    return iRet;
}

int main()
{
    char File_Name[30] = {'\0'};
    char data[50] = {'\0'};
    int fd = 0;
    int wrt = 0;
    int bytes = 0;

    printf("Enter the name of file that you want to open to write :\n");
    scanf("%s", File_Name);

    fd = OpenFile(File_Name);   // It returns file descriptor

    if (fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File gets opened successfully with fd %d\n", fd);

        printf("Enter the data that you want to write into file :\n");
        scanf(" %[^'\n']s", data);

        printf("Enter the number of bytes that you want to write into file :\n");
        scanf(" %d", &bytes);

        wrt = WriteFile(fd, data, bytes);   // On success it returns number of bytes and on failure it returns -1

        if (wrt == -1)
        {
            printf("Unable to write into file\n");
        }
        else
        {
            printf("Data gets successfully written into file with fd %d\n", fd);
        }
    }

    close(fd); // (File Discriptor)

    return 0;
}
