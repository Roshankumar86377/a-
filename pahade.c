/* WAP to print the table using recursion */
# include<stdio.h>
 
void printTable(int x);

int main(){
    int x;
    printf("Enter the number:\n");
 scanf("%d", &x);

 printTable(x);

 return 0;
}

void printTable(int x) {
    for (int i=1; i<=10; i++) {
        printf("%d\n", i*x);
    }
}