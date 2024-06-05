// Program to accept string from the user and display the count of capital letters

#include <stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
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

    iRet = strlenCapX(Arr);

    printf("Length of the capital letters in string :\n%d", iRet);

    return 0;
}
