/* WAP by the use of function 
     TAKES SOMETHING , RETURNS SOMETHING */

# include<stdio.h>

int add(int a,int b);

int main(){
    int x,y,s;
    printf("x=\n and y=\n");
    scanf("%d%d", &x, &y);
    s=add(x,y);
    printf("sum is %d", s);
    return 0;
}

int add(int a,int b){
    int c;
    c=a+b;
    return c;
}