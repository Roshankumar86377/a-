/* WAP using bubble sort method to sort the array in ascending order ? */

# include<stdio.h>
int main(){
    int a[50],i,j,n,temp;
    printf("Enter number of array n:\n");
    scanf("%d", &n);
    printf("Elements are\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ // similarlily in decending order // 
            if(a[j]>a[j+1]){     // a[j]<a[j+1] //
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Arrangements are\n");
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}