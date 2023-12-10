/* WAP to solve the given problem */
# include<stdio.h>
int main(){
    float a,b;
    printf("enter a\n");
    scanf("%f", &a);
    printf("enter b\n");
    scanf("%f", &b);
    // 2a+3b,  3a-2b,  (2a)/(3b)//
    printf("Value of 2a+3b is %f\n", 2*a + 3*b);
    printf("value of 3a-2b is %f\n", 3*a - 2*b);
    printf("Value of 2a/3b is %f\n", (2*a)/(3*b));

    return 0;
    
}