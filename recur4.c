/* WAP to print the program to sum of any two number by the use of recursion */

# include<stdio.h>

int sum(int a,int b);

int main(){
printf("Enter the two number :\n");
int a,b;
scanf("%d%d", &a, &b);

int s=sum(a,b);
printf("sum is: %d\n",s);
    return 0;
}

int sum(int a,int b){
    return a+b;
}