/* WAP in array to print the reverse order */

# include<stdio.h>
int main(){
    int n,a[n],b[n];
    printf("Enter the n=\n");
    scanf("%d", &n);
    printf("Enter the element\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Element is\n");
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("reverse is \n");
    for(int i=(n-1); i>=0; i--){
        printf("%d\t", a[i]);
    }

    return 0;
}