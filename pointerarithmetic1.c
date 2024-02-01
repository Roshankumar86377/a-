/* 1. We can also subtract one pointer from another pointer 
   IF   their size is same(means int-int , char-char, float-float)

    2. We can also compare 2 pointers. */

# include<stdio.h>
int main(){
    int age=20;
    int _age=21;
    float pie=3.14;
    char name='R';
    int *Umr=&age;
    int *_Umr=&_age;
    float *m=&pie;
    char *n=&name;
    printf(" %u\n %u\n  subtract:%u\n", Umr,_Umr,Umr-_Umr);//it run //

   // printf("%u\n  %u\n  comparison: %u\n",Umr,m, Umr-m);// it is not run//
    // always in same type not in different type//
    return 0;
}