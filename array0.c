# include<stdio.h>
int main(){
    int a[3];
    printf("enter element\n");
    for(int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    printf("array element \n");
    for(int i=0; i<3; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}