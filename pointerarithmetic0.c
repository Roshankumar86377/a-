/* POINTER can be incremented and decremented */

# include<stdio.h>
int main(){
    int age=20;
    int *ptr=&age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    return 0;
}