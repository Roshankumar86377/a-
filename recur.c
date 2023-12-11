/* WAP to hello world by the use of recursion */
# include<stdio.h>

void printHW(int count);

int main(){

printHW (5);
return 0;
}

void printHW(int count) {
    if (count==0) {
        return;
    }
    printf("Hello World\n");
    printHW (count-1);
}