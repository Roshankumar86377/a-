/* WAP to add 1 to n by the use for loop */
# include<stdio.h>
int main(){
    // print the sum of first n natural number//
    // also, print them in reverse//
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    int sum=0;
    for(int i=1, j=n;  i<=n && j>=1; i++,j--) {
        sum=sum+i;
        printf("%d\n", i);
    }
    printf("%d\n", sum);
    return 0;
}