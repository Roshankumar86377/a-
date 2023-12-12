/* wAP to print the pattern 
5 4 3 2 1
5 4 3 2 
5 4 3 
5 4 
5              */
# include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=5; j>=i; j--){
            printf(" ");
            printf("%d", j);    // When we print the pattern //
        }                      //   DCBA  //
        printf("\n");         //    DCB   // 
    }                        //     DC  //
    return 0;                //     D   //
}                           // WE use = printf("%c", j+64); // 