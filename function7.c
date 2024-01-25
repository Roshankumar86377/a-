/* WAP with the use of function
    TAKES NOTHING , RETURN NOTHING  */

# include<stdio.h>

void add();

void main(){
    add();
}

void add(){
    int a,b,c;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);
    c=a+b;
    printf("Sum of two number is:%d", c);
}