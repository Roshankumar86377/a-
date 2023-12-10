// Write a program to input integer number and reverse the number //
# include<stdio.h>
int main(){
    int n, multi=0,a;
    printf("enter the number :\n");
    scanf("%d", &n);
    do{
        a=n%10;
       multi= multi*10+a;
        n=n/10;
    }
        while(n>0);
            printf("reverse is %d\n", multi);
        return 0;
}