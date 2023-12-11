// In this program we make the calculator with the help of switch //
# include<stdio.h>
int main(){
    int n,Add,Sub,Multi,Div;
    float x,y;
    printf("***************************Options**********************************\n");
    printf("1. Add            2. Sub  \n");
    printf("3. Multi          4. Div  \n");
    printf("Enetr your option :\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1: 
        printf("x =");
        scanf("%f", &x);
        printf("y = ");
        scanf("%f", &y);
        printf("sum of x and y is %f\n", x+y);
        break;

        case 2: 
        printf("x = ");
        scanf("%f", &x);
        printf("y = ");
        scanf("%f", &y);
        printf("Subtract of x and y is %f\n", x-y);
        break;

         case 3: 
        printf("x = ");
        scanf("%f", &x);
        printf("y = ");
        scanf("%f", &y);
        printf("Multiply of x and y is %f\n", x*y);
        break;

        case 4: 
        printf("x = ");
        scanf("%f", &x);
        printf("y = ");
        scanf("%f", &y);
        printf("Divide of x and y is %f\n", x/y);
        break;

        default:
        printf("Wrong number\n");
    }
    return 0;
}