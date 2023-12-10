/* WAP to print the two number and sum of square root of that number */
# include<stdio.h>
# include<math.h>
int main(){
    float a,b,c,d;
    printf("Enter the two numbers :\n");
    scanf("%f %f", &a , &b);
    c = sqrt((a*a) + (b*b));
    d = log((a/b) + c);
    printf("The square root number is %f\n", c);
    printf("%f\n", d);
    return 0;
}