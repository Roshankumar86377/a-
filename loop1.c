/* WAP to print the counting number by the use of for loop */
# include<stdio.h>
int main(){
    printf("Counting number(0-100)\n");
    for(int i=0; i<=100; i++) {
    printf("%d\n", i);
    }

    printf("Reverse counting number(100-1)\n");
    for(int i=100; i>=1; i--) {
    printf("%d\n", i);
    }
    return 0;
}