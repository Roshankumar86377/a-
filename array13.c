/* WAP using insrtion sort method to sort the array in ascending order ? */

# include<stdio.h>
int main(){
    int i,j,n,temp,a[50];
    printf("Enter the number of n element:\n");
    scanf("%d", &n);
    printf("Elements are\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        temp=a[i];
        j=i-1;                     // similarily in decending order //
        while(j>=0 && a[j]>temp){   // (j>=0 && a[j]<temp)         //
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("Arrangements are\n");
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}