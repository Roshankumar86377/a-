/* WAp to make the grading system */
#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter percentage:\n");
    scanf("%f", &percentage);
    if (100 >= percentage && percentage > 90)
    {
        printf("A1\n");
        printf("passed\n");
    }
    else if (90 >= percentage && percentage > 80)
    {
        printf("A2\n");
        printf("Passed\n");
    }
    else if (80 >= percentage && percentage > 70)
    {
        printf("B1\n");
        printf("Passed\n");
    }
    else if (70 >= percentage && percentage > 60)
    {
        printf("B2\n");
        printf("Passed\n");
    }
    else if (60 >= percentage && percentage > 50)
    {
        printf("C1\n");
        printf("Passed\n");
    }
    else if (50 >= percentage && percentage > 40)
    {
        printf("C2\n");
        printf("Passed\n");
    }
    else if (40 >= percentage && percentage > 33)
    {
        printf("D\n");
        printf("Passed\n");
    }
    else if (33 >= percentage && percentage > 0)
    {
        printf("failed\n");
    }
    else
    {
        printf("Wrong percentage\n");
    }

    printf("Thanks You\n");
    return 0;
}