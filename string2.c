/* WAP to print the string function */

# include<stdio.h>
# include<string.h>

int main(){
    char a[30];
printf("Enter something\n");
gets(a);
printf("something are\n");
puts(a);
printf("%d\n", strlen(a));//strlen=to calculate the length of no. of character//
printf("%s\n", strrev(a));//strrev=to reverse the string//


    char c[30],d[30];
    printf("Enter first something\n");
    gets(c);
    printf("Enter second something\n");
    gets(d);
    printf("something are\n");
    puts(c);
    puts(d);
    printf("%s\n", strcat(c,d));//strcat=to join the two string//


    char e[30],f[30];
    printf("Enter name\n");
    gets(e);
    strcpy(f,e);//strcpy=used to copy particular string into another string//
    puts(f);
    return 0;
}