// Program to delete file permanantly

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int DeleteFile(char *fname)
{
    int iRet = 0;

    iRet = unlink(fname);

    return iRet;
}

int main()
{
    char File_Name[30] = {'\0'};
    int iRet = 0;

    printf("Enter the name of file that you want to delete :\n");
    scanf("%s", File_Name);

    iRet = DeleteFile(File_Name);

    if (iRet == -1)
    {
        printf("Unable to delete the file\n");
    }
    else
    {
        printf("File gets deleted successfully\n");
    }

    return 0;
}
