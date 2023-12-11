/* WAP to print the pattern e.x.=
1
12
123
1234   */
# include<stdio.h>
int main(){
    int n,i=1,j;
    printf("Enter the value of n :");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=i){
        printf("%d", j);
        j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}