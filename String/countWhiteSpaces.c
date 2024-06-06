// Program to accept string from the user and display the count of white spaces

#include <stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    iRet = CountSpace(Arr);

    printf("Count of white spaces in string :\n%d", iRet);

    return 0;
}
