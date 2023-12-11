/* WAP to print the three number and find greatest of all three */
# include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter value :");
    scanf("%f%f%f", &a, &b, &c);
    if (a>b && a>c){
        printf("greatest value is %f", a);
    }
    else if(b>a && b>c){
        printf("greatest value is %f", b);
    }
    else{
        printf("greatest is value is %f", c);
    }
return 0;
}