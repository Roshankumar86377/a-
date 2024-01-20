/* WAP to print the factorial of n number with the use of function method */

# include<stdio.h>

int factorial(int n);

int main(){
int n;
printf("Enter the n:\n");
scanf("%d", &n);
factorial(n);
return 0;
}

int factorial(int n){
    int multi=1;
    for(int i=1; i<=n; i++){
        multi=multi*i;
    }
        printf("%d", multi);
}