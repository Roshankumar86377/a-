/* WAP to print string function(strcmp() and strlwr()&strupr()) 

1. It compare the two string & returns an integer value. 
2. If both the string are same then the function would return 0.
3. Otherwise it return +ve or -ve value based on comparision. 
4. It is a case sensitive(use strcmpi). 
5. Return 0 if (str1==str2).
6. Return +ve if (str1>str2).
7. Return -ve if (str1<str2). */


# include<stdio.h>
# include<conio.h>
# include<string.h>
int main(){
char a[30],b[30];
printf("Enter the 1st string\n");
gets(a);
printf("Enter the 2nd string\n");
gets(b);
if(strcmpi(a,b)==0){
    printf("string are equal\n");
}
else if(strcmpi(a,b)>0){
    printf("1st String is greater\n");
}
else{
    printf("2nd String is greater\n");
}


char c[30],d[30];
printf("Write Roshan in capital words\n");
gets(c);
printf("Write Roshan in small words\n");
gets(d);
puts(c);
puts(d);
printf("%s\n", strlwr(c));
printf("%s\n", strupr(d));
return 0;
}