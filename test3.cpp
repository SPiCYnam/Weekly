#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int x;
    scanf_s("%d", &x);
    for (int i = 0; i < x ; i++)
    {
        if (i == 0 || i == x - 1) // first line andn last line -> show *  x times
        {
            for (int j = 0; j < x; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if ( i != 0 || i!= x-1)  // other lines
        {
            for (int j = 0; j < x; j++)
            {
                if (j == 0 || j == x - 1)
                {
                    printf("*");
                }
                else if (i != 0 || i != x - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}