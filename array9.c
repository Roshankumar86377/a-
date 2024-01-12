/* WAP using 2-d array [2*2] for transpose of a matrix */

# include<stdio.h>
int main(){
    int a[3][3],b[3][3];
    int i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
            printf("%d  ", a[i][j]);
            }
            printf("\n");
    }
    printf("\n");
    printf("The transpose  of a matrix is:\n");
for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                b[i][j]=a[j][i];
            }
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d  ", b[i][j]);
    }
    printf("\n");
}
return 0;
}
