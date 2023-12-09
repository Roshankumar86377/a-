// Write a program sum of given digit //
# include<stdio.h>
int main(){
    int n,sum=0,d;
    printf("Enter the value :\n");
    scanf("%d", &n);
    do{
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    while(n);
    printf("sum = %d\n", sum);
    return 0;
}