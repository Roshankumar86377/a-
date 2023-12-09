/* To check the number is composite or not composite number */
# include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number n :\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+1){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count>2){
        printf("the number is a composite number\n");
    }
    else{
        printf("The number is not a composite number\n");
    }
    return 0;
}