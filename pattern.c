/* WAP to print a pattern e.x.=
1
23
456
78910 */
# include<stdio.h>
int main(){
    int i,j,k=0;
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            k=k+1;
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}