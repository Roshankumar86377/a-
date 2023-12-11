/* WAP by the use of continue */
# include<stdio.h>
int main(){
    int n;
    for(int i=1; i<=15; i++) {
        if(i==6) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}