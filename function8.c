/* wAP with the use of function 
    TAKE SOMETHING , RETURN NOTHING */

# include<stdio.h>

int add(int x,int y);

int main(){
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    add(a,b);
}

int add(int x,int y){
    int c;
    c=x+y;
    printf("Sum of the two number is:%d\n", c);
    return 0;
}