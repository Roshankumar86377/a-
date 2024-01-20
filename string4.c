/* WAP that accept a string and count total number of words? */

# include<stdio.h>
# include<string.h>
int main(){
    int i, j=1;
    char a[100];
    printf("strings=\n");
    gets(a);
    i=0;
    while(a[i]!='\0'){
        if(a[i]==' '){
            j++;
        }
        i++;
    }
    printf("words=%d\n", j);
    printf("%d\n", i);
    return 0;
}