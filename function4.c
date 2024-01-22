/* WAP with the use of function 
    TAKE NOTHING, RETURN SOMETHING     */

# include<stdio.h>

int add();

int main(){
    int s;
    s=add();
    printf("Sum is %d\n", s);
    return 0;
}

int add(){
    int a,b;
    printf("Enter the two number:\n");
    scanf("%d%d", &a, &b);
    return a+b;
}