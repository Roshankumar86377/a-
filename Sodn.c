// WAP to print a sum of odd number //
# include<stdio.h>
int main(){
    int n=1, sum=0;
    do{
    sum=sum+n;
    n=n+2;
    }while(n<=100);
    printf("Sum is = %d\n",sum);
    return 0;
}