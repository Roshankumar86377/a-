/* WAP to print the number whose divisible by 7 */
# include<stdio.h>
int main(){
    int n;
    do {
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n % 7 == 0) {
        break;
    }

    }while(1);
    printf("Thank you\n");
}