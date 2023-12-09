/* WAP to print a digit and their sum */
# include<stdio.h>
int main(){
    int n,sum=0, r;
    printf("enter the number \n");
    scanf("%d", &n);
    for( ; n!=0; n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    printf("sum is =%d\n", sum);
    return 0;
}