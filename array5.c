/* WAP in array to print EVEN and ODD number separately */

# include<stdio.h>
int main(){
    int n,a[n],b[n],c[n],i,j=0,k=0;
    printf("Enter the n=\n");
    scanf("%d", &n);
    printf("Enter the element\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
    if(a[i]%2==0){
            b[j]=a[i];
            j++;
    }
    else{
            c[k]=a[i];
            k++;
        }
    }
    for(int i=0; i<j; i++){
        printf("%d\t\n", b[i]);
    }
    for(int i=0; i<k; i++){
        printf("%d\t\n", c[i]);
    }
    return 0;
}