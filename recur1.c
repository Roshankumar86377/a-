/* WAP to print sum of 1 to 6 by the use of recursion */
# include<stdio.h>
// sum of n numners is //

int sum(int n);

int main(){
    printf("sum id %d\n", sum(6));
    return 0;

}

int sum (int n){
    if (n==1) {
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sum(n-1) + n;
    return sumN;
}