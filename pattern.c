/* Write a program to display a pattern e.x.=
*
**
***
****       */
# include<stdio.h>
int main(){
    int n,i=1,j;
    printf("Enter the n:\n");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}