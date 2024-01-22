/* WAP to calculate the a^n by the use of recursion */

# include<stdio.h>

int power(int a,int b);

int main(){
    printf("power is\n %d", power(4,2));
    return 0;
}

int power(int a,int b){
    /*int a,b;
    printf("base:\n");
    scanf("%d", &a);
    printf("exp:\n");
    scanf("%d", &b);*/

    if(b==1){
        return (a);
    }
    if((b-1)==0){
        return 1;
    }
    else{
        return (a*power(a,b-1));
    }
}