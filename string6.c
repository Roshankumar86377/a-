/* WAP which calculate the number of vowels & constant & number
             of space entered by user */


# include<stdio.h>
# include<string.h>
int main(){
    char a[100];
    int i,v=0,c=0,s=0;
    printf("Enter the strings=\n");
    gets(a);
    for(i=0; i<strlen(a); i++){
        if(a[i]=='a' || a[i]=='e'|| a[i]=='i' || a[i]=='o' || a[i]=='u'){
            v=v+1;
        }
        else if(a[i]==' '){
        s=s+1;
        }
        else{
            c=c+1;
        }
    }
    printf("vowels are:%d\n", v);
    printf("space are:%d\n", s);
    printf("constant are:%d\n", c);
    return 0;
}