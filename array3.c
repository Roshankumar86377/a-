/* WAP to delete the element in an array */

# include<stdio.h>
int main(){
    int n,a[5],p,i;
    printf("Enter n=\n");
    scanf("%d", &n);
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter p=\n");
    scanf("%d", &p);
    if(p>=n-1){
        printf("delection not possible\n");
    }
    else{
        for(i=(p-1); i<n-1; i++){
            a[i]=a[i+1];
        }
    }
    for(i=0; i<n-1; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}