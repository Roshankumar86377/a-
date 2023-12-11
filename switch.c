/* WAP to print the week by using the switch case */
# include<stdio.h>
int main()
{
    int day;
    printf("Enter day(1-7)\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thresday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("not a valid day\n");
    }
    printf("Thank You\n");
    return 0;
}