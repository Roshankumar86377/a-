/* WAP to print the square of any number n by the use of function */

# include<stdio.h>
# include<math.h>

int squ(int n,int y);
;
int main(){
int n,y;
 squ(n,y);

return 0;
}

int squ(int n, int y){
    scanf("%d%d", &n, &y);
printf("Square of the number is:%f", pow(n,y));
}