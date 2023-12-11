/* WAP to print age and he is child,teen,adult,old */
# include<stdio.h>
int main(){
    int age;
    printf("enter age\n");
    scanf("%d", &age);
if(age<=12) {
    printf("Children\n");
}
    else if (age<=18) {
    printf("Teenager\n");
}
 else if(age<=45) {
    printf("Adult\n");
 }
 else if(age<=120) {
    printf("Old\n");
 }
 else {
    printf("Wrong Age\n");
 }
printf("Thank You\n");
 return 0;
}