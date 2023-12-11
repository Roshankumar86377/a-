# include<stdio.h>
//write a fuction that print Namaste if user is Indian // 
 // & Bonjour if user is French //
 void printNamaste();
 void printBonjour();

int main(){
int a;
printf("Enter i for Indian & Enter f for French :\n");
char ch;
scanf("%c\n", &ch);
if (ch=='i') {
    printNamaste();
} else {
    printBonjour();
}
    return 0;
}

void printNamaste() {
    printf("Namaste\n");
}

void printBonjour(){
    printf("Bonjour\n");
}