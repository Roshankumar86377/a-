/* WAP to use the logical operator */
# include<stdio.h>
int main(){
/* && = and
   || = or
   ! = not */
printf("%d\n", 4>3 && 8<9);
printf("%d\n", 2>6 && 8<9);
printf("%d\n", 2==2 || 3!=5);
printf("%d\n", 8!=6 || 4>2);
printf("%d\n", 2!=3);

return 0;
}