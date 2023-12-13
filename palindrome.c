# include<stdio.h>
int main(){
    int n,r,sum=0,k;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    k=n;
    while(n>0){
    r=n%10;
    sum=sum*10 + r;
    n=n/10;
    }
    if(sum==k){
        printf("The number is PALINDROME NUMBER\n");
    }
    else{
        printf("The number is NOT PALINDROME NUMBER\n");
    }
    return 0;
}