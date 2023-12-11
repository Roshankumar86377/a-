/* WAP to print the table using while loop */
# include<stdio.h>
int main(){
    // print the table of a number by the user //
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
    printf("%d\n", n*i);
    }
    return 0;
}