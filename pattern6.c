/* WAP a program to print the patttern 
*****
****
***
**
*        */
# include<stdio.h>
int main(){
    int i,j;
    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}