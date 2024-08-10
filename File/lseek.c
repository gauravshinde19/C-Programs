// Program to read the data from the file from specific location

/*
    SEEK_SET - Beginning of file
    SEEK_CUR - Current position
    SEEK_END - End of file
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int OpenFile(char *fname)
{
    int iRet = 0;

    iRet = open(fname, O_RDONLY); // (Name of the file, Mode)

    return iRet;
}

int ReadFileFromPosition(int iRet, char *rdata, int fbytes, int offset)
{
    lseek(iRet, offset, SEEK_CUR);    // (File discriptor, offset, seek)
    iRet = read(iRet, rdata, fbytes); // (File discriptor, empty array, bytes)

    return iRet;
}

int main()
{
    char File_Name[30] = {'\0'};
    char data[30] = {'\0'};
    int fd = 0;
    int rdt = 0;
    int bytes = 0;
    int iPos = 0;

    printf("Enter the name of file that you want to open to read :\n");
    scanf("%s", File_Name);

    fd = OpenFile(File_Name);   // It returns file descriptor

    if (fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File gets opened successfully with fd %d\n", fd);

        printf("Enter the number of bytes that you want to read from the file :\n");
        scanf(" %d", &bytes);

        printf("Enter the offset (position) from you want to read :\n");
        scanf(" %d", &iPos);

        rdt = ReadFileFromPosition(fd, data, bytes, iPos);   // On success it returns number of bytes and on failure it returns -1

        if (rdt == -1)
        {
            printf("Unable to read from the file\n");
        }
        else
        {
            printf("Data from the file :\n%s\n", data);
            printf("Data gets successfully read from the file with fd %d\n", fd);
        }
    }

    close(fd); // (File Discriptor)

    return 0;
}
