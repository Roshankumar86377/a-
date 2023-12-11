/* WAP to ODD number between 1 to 50 by the use of CCONTINUE */
# include<stdio.h>
int main(){
    for(int i=5; i<=50; i++) {
        if(i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}