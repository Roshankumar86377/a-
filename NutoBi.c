/* WAP to convert the decimal into binary form by the use  of function */

# include<stdio.h>

int db();

int main(){
    db();
    return 0;
}

int db(){
    int num,r,bin=0,f=1;
    printf("Enter the number n:\n");
    scanf("%d", &num);
    while(num!=0){
        r=num%2;
        bin=bin+r*f;
        f=f*10;
        num=num/2;
    }
    printf("binary number:%d  \n", bin);
    return (bin);
}