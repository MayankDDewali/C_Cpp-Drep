/* Pz10- C Program to Check Whether a Number is Even or Odd*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }
    return 0;
}