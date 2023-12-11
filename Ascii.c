/* WAP to print all ASCII value by the use of while loop */
# include<stdio.h>
int main(){
    int n=1;
    while( n<=255){
        printf("%c=%d\n", n,n);
        n++;
    }
    return 0;
}