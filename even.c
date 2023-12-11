// In this program we print an even number with help of while loop //
# include<stdio.h>
int main(){
    int i=1;
    while(i<=50){
        if(i%2==0 && i%3==0){
        printf("%d\t", i);
        }
        i++;
    }
    return 0;
}