/* WAP to print the pattern e.x.=
1
22
333
4444   */
# include<stdio.h>
int main(){
    int n, i=1,j;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=i){
            printf("%d", i);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}