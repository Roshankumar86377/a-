/* WAP to insert the an element in an array */

# include<stdio.h>
int main(){
    int i,a[5],n,p,v;
    printf("Enter n=\t");
    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d", &a[i]);
    }
    printf("Enter p=\t");
    scanf("%d", &p);
    printf("Enter v=\t");
    scanf("%d", &v);
    for(i=(n-1); i>=(p-1); i--){
        a[i+1]=a[i];
    }
    a[p-1]=v;
    for(i=0; i<=n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}