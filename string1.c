/* WAP to print something by the multiple string */

# include<stdio.h>
int main(){
    char a[3][20];
    printf("Enter the something\n");
    for(int i=0; i<=2; i++){
        gets(a[i]);
    }
    for(int i=0; i<=2; i++){
        puts(a[i]);
    }
    return 0;
}