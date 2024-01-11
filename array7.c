/* WAP for 2-d array[2*2]to print & read the element of a matrix ? */

# include<stdio.h>
int main(){
    int a[3][3],i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;  j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<3;  j++){
            printf("%d  ", a[i][j]);
        }
     printf("\n");
     }
     return 0;
}