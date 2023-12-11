/* WAP the continuous number as you want by the use of while loop*/
# include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int i=1;
    while(i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}