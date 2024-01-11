// Write the function to print n terms of the Fibonacci sequence */

# include<stdio.h>

int fibo(int n);

int main(){
printf("Fibonacci is %d", fibo(6));
    return 0;
}

   int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   int fiboNm1 = fibo(n-1);
   int fiboNm2 = fibo(n-2);
   int fiboN = fibo(n-1) + fibo(n-2);
   return fiboN;
}