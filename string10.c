/* WAP to check whether a two string is ANAGRAM or not */

# include<stdio.h>
# include<string.h>
int main(){
    char a[50],b[50];
    int i,j,l1,l2,temp,flag=2;
    puts("Enter the 1st string:\n");
    gets(a);
    puts("Enter the 2nd string:\n");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2){
        for(i=0; i<l1; i++){
            for(int j=0; j<l1; j++){
                if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0; i<l2; i++){
            for(int j=0; j<l2; j++){
                if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    if(strcmp(a,b)==0){
        flag=2;
    }
    else{
        flag=1;
    }
    }
    else{
        flag=1;
    }
    if(flag==2){
        puts("It is a ANAGRAM\n");
    }
    else{
        puts("It is not a ANAGRAM\n");
    }
    return 0;
}