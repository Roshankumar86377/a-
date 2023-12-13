/* WAP to print the pattren , similarly as 
5                                E
5 4                              E D 
5 4 3                            E D C 
5 4 3 2                          E D C B
5 4 3 2 1                        E D C B A  printf("%c", j+64);  */
# include<stdio.h>
int main(){
    int i,j;
    for(i=5; i>=1; i--){
        for(j=5; j>=i; j--){
            printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}