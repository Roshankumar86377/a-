// In this program we make a complex if else program //
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n\n:");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("n is Even\n");
        if (n % 4 == 0)
        {
            printf("n is Even and divisible by 4\n");
        }
        else
        {
            printf("n is Even but not divisible by 4\n");
        }
    }
    else
    {
        printf("n is Odd\n");
        if (n % 3 == 0)
        {
            printf("n is Odd and divisible by 3\n");
        }
        else
        {
            printf("n is Odd but not divisible by 3\n");
        }
    }
    return 0;
}