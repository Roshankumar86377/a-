/* WAP to print the factorial by the use of for loop */
# include<stdio.h>
int main(){
    // only on small number to find factorial //
    int n;
    int facto=1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        facto=facto*i;
    }
    printf("final factorial is %d\n", facto);
    return 0;
}
