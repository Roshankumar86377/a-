/* WAP to enter the elements of array and the elements are present or not 
   the position of the elements */

#include <stdio.h>

int main()
{
    int a[10], n, i, x, loc = 0;

    printf("Enter the number of element n is:\n");
    scanf("%d", &n);
    printf("Elements are\n");
    for (int i = 0; i <= (n - 1); i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to searching is:\n");
    scanf("%d", &x);
    for (int i = 0; i <= (n - 1); i++)
    {
        if (a[i] == x)
        {
            loc=loc+i+1;
            printf("The number is found\n");
        }
    }
        if(loc>0){
            printf("The position of number is: %d\n", loc);
        }
        else{
            printf("Wrong number\n");
        }
    return 0;
}