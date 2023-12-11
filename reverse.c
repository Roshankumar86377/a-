/* WAP the decresing number by the use of for loop */
# include<stdio.h>
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(int i=10; i>=1; i--) {
    printf("%d\n", n*i);
    }
    return 0;
}