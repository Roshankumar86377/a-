/* WAP using 2-d array for the matrix multiplication */

# include<stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2];
    int i,j,k;
    printf("Enter the first matrix of the element is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the second matrix of the element is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The second matrix is:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

     printf("The multiplication of the matrix a and b is:\n");
    for(int i=0; i<2; i++){
        for(j=0; j<2; j++){
            c[i][j]=0;
            for(int k=0; k<2; k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}