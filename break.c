/* WAP to use the break */
# include<stdio.h>
int main(){
    int n;
    do {
        printf("Enter the number\n");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 !=0) {
            break;
        }
    } while(1);
        printf("thank you\n");
        return 0;
}