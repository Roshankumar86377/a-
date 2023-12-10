/* WAP to print the square of the given number */
# include<stdio.h>
# include<math.h>
int main(){
    int x,y;
    printf("enter value of x\n");
    scanf("%d", &x);
    printf("enter the value of y\n");
    scanf("%d", &y);
    printf("x to the power of y is %f\n", pow(x,y));
    return 0;
    
}
