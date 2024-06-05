// Program to accept string from the user and display the count of small case letters

#include <stdio.h>

int strlenSmallX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = strlenSmallX(Arr);

    printf("Length of the small case letters in string :\n%d", iRet);

    return 0;
}
