/* WAP to print a pattern 
1
01
010
1010
10101  */
# include<stdio.h>
int main(){
    int i,n,j,k=1;
    printf("n=\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d", (k++)%2);
        }
        printf("\n");
    }
    return 0;
}