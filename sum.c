# include<stdio.h>
int main(){
    // sum of all number between 5 and 50 //
    int sum=0;
    for (int i=5; i<=50; i++) {
        sum = sum+i;
    }
        printf("sum is %d\n", sum);
    return 0;
}