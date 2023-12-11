/* Write a program to print the sum of all odd integer number b/w 1 to 100 */
# include<stdio.h>
int main(){
    int sum;
    for(int n=1; n<=100; n=n+2){
        sum = sum+n;
    printf("%d\n \t", n);
    }
    printf("%d\n \t", sum);
    return 0;
}
