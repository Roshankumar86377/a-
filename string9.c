/* WAP to check whether the input string is palindrome string is not */

# include<stdio.h>
# include<conio.h>
# include<string.h>

int main(){
    char a[100],b[100];
    int l;
    puts("Enter the first strings:\n");
    gets(a);
    strcpy(b,a);
    strrev(a);
    l=strcmp(a,b);
    if(l==0){
        printf("PALINDROME\n");
    }
    else{
        printf("NOT PALINDROME\n");
    }

     //                 OR                   //


    char c[100];
    int i,r;
    printf("Enter the second strings:\n");
    gets(c);
    r=strlen(c);
    for(int i=0; i<r/2; i++){
        if(c[i]!=c[r-1-i]){
        printf("NOT PALINDROME\n");
        break;
        }
    else{
        printf("PALINDROME\n");
        }
    }
    return 0;
}