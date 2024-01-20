/* WAP that accept a string and print it character by character */

# include<stdio.h>
# include<string.h>
int main(){
    char a[100];
    int i;
    printf("Enter the string: \n");
    gets(a);
    i=0;
    while(a[i]!='\0'){
        printf("%c\n", a[i]);
        i++;
    }
    return 0;
}