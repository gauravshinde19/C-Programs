// Program to accept string from user and update string with _ inplace of all white spaces

#include <stdio.h>

void UpdateString(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    UpdateString(Arr);

    printf("Updated string : \n%s", Arr);

    return 0;
}
