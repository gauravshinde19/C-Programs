// Program to accept string from the user and display the length of the string without using strlen()

#include <stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    iRet = strlenX(Arr);

    printf("Length of the string :\n%d", iRet);

    return 0;
}
