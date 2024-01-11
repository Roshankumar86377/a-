# include<stdio.h>
int main(){
    int i,j,a[2][2];
    printf("Enetr element\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array element is \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            printf("%d\n", a[i][j]);
        }
    }
    return 0;
}
