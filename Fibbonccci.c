# include<stdio.h>
# include<math.h>
int main(){
    int i,sum=0,a=0,b=1,n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=0; i<=(n-2); i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The FIBBONACCI number is %d\n",sum);
    }
    return 0;
}