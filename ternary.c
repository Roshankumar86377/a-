/* WAP by the use of condinal operater */
# include<stdio.h>
int main(){
    int age;
    printf("enter age\n");
    scanf("%d", &age);

    age>=18 && age<=45 ? printf("Adult\n") : printf("Not Adult\n");

    return 0;
}