# include <stdio.h>
/* WAP to print the number and the number is COMPOSITE and PRIME number */
int main(){
    int i,n,c=0;
    printf("Enter the number n :\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0)
        c=c+1;
    }
    if(c==2)
    printf("The number is a PRIME number\n");
    else
    printf("The number is a COMPOSITE number\n");
    return 0;
}