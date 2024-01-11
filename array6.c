/* WAP using selection sort method to sort the array in the ascending order */

# include<stdio.h>
int main(){
    int n,i,j,temp;
    int a[10];
    printf("n=\n");
    scanf("%d", &n);
    printf("Enter element\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){    // similarly in decending order//
            if(a[j]<a[i]){          // if(a[j]>a[i])                //
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}