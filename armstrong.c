/* WAP to check if the input number is ARMSATRONG or not by the use of function */

# include<stdio.h>

int arms();

int main(){
    arms();
    arms();
    return 0;
}

int arms(){
    int n,sum=0,a,b;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    b=n;
    while(n>0){
    a=n%10;
    sum=sum + (a*a*a);
    n=n/10;
    }
    if(b==sum){
        printf("The number is Armstroong number\n");
    }
    else{
        printf("The number is not the Armstrong numer\n");
    }
    return 0;
}