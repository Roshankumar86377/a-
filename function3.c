/* WAP to print the fibonacci number of n number */

# include<stdio.h>

int fibo(int n);

int main(){
    int n;
fibo(n);
return 0;
}

int fibo(int n){
    int a=0, b=1,c=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(int i=0; i<=(n-2); i++){
     c=a+b;
     a=b;
     b=c;
    }
     printf("The fibonacci is %d\n", c);
}