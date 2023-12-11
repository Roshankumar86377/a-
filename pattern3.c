/* WAP to print the pattern e.x.=
*****
*****
*****
*****   */
# include<stdio.h>
int main(){
    int n,i=1,j;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=n){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}