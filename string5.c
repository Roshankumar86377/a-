/* WAP which calculate the white space,total word and total length 
             character in a given line of text */

# include<stdio.h>
# include<string.h>
int main(){
    char a[100];
    int i,count=0,n;
    printf("Enter the string=\n");
    gets(a);
    for(int i=0; i<strlen(a); i++){
        if(a[i]==' '){
            count=count+1;
        }
    }
    printf("Total length is %d\n", strlen(a));
    printf("Total space is %d\n", count);
    n=strlen(a)-count;
    printf("Total word is %d\n", n);
    return 0;
}