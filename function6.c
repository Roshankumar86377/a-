/* WAP to swap two number using functon */

# include<stdio.h>

int changing();

int main(){
    changing();
    return 0;
}

int changing(){
    int a,b,c;
    printf("Enter the number a:\n");
    scanf("%d", &a);
    printf("Enter the number b:\n");
    scanf("%d", &b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("swapping the a and b is:\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return (a,b);
}