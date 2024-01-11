/* WAP to print the program Namaste and Buy by the use of recursion */

# include<stdio.h>

void Namaste();
void Buy();

int main(){
printf("Enter 'n' for namaste and 'b' for Buy \n");
char ch;
scanf("%d", &ch);
if(ch=='n'){
    Namaste();
}
else{
    Buy();
}
    return 0;
}

void Namaste(){
    printf("Namaste ROSHAN KUAMR\n");
}
void Buy(){
    printf("Buy ROSHAN KUAMR\n");
}