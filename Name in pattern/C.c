/*
                *****
                *
                *
                *
                *****
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}