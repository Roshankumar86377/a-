/* To check the number is a prime number or not */
# include<stdio.h>
int main(){
    int i,n,count=0;
    printf("Enter the number n :\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("Number is a prime number\n");
    }
    else{
        printf("Number is not a prime number\n");
    }
    return 0;
}