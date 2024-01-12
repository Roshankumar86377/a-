/* WAP for 2-d array[2*2] on matrix addition ? */

# include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        scanf("%d", &a[i][j]);
    }
    }
     for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d  ", a[i][j]);
    }
    printf("\n");
    }
 for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        scanf("%d", &b[i][j]);
    }
    }
     for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d  ", b[i][j]);
    }
    printf("\n");
    }
 for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        c[i][j]=a[i][j]+b[i][j];
    }
 }
 printf("\n");
 printf("The sum of a and b matrix is:\n");
      for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d  ", c[i][j]);
    }
    printf("\n");
    }

    return 0;
}