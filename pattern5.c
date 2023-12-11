/* WAP to print the pattren e.x.= 
12345
12345
12345
12345  */
# include<stdio.h>
int main(){
    int n,i=1,j;
    printf("Enetr the value of n :");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=n){
            printf("%d", j);
        j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}