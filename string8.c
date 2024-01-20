/* WAP to swap the string */

# include<stdio.h>
# include<string.h>
int main(){
    char a[100],b[100],c[100];
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("a=%s\n", a);
    printf("b=%s\n", b);
    return 0;
}