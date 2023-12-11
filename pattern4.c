/* WAP to print the pattren e.x.= 
11111
22222
33333
44444   */
# include<stdio.h>
int main(){
    int n,i=1,j;
    printf("Enetr the value of n :");
    scanf("%d", &n);
    while(i<=n){
        j=1;
        while(j<=n){
            printf("%d", i);
        j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}