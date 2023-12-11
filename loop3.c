/* WAP to print the incresing number as you want by the use of for loop */
# include<stdio.h>
int main(){
    int n;
    printf("Enter number :\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}