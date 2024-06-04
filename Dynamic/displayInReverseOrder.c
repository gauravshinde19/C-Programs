// Program to accept numbers from user dynamically and display it in reverse order

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;

    printf("Elements in reverse order :\n");
    for (i = iSize - 1; i >= 0; i--)
    {
        printf("%d\n", Arr[i]);
    }
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Display(Brr, iCount);

    free(Brr);

    return 0;
}
