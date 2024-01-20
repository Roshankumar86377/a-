/* WAP to print the area of the square,circle and rectangle */

# include<stdio.h>

float squ(float n);
float cir(float r);
float rect(float l, float b);

int main(){
float n,r,l,b;

squ(n);
cir(r);
rect(l,b);
    return 0;
}

float squ(float n){
    printf("Enter the side of a square is:\n");
    scanf("%f", &n);
    printf("Area of the square is: %f\n", n*n);
}
float cir(float r){
    printf("Enter the radius of a circle is:\n");
    scanf("%f", &r);
    printf("Area of the circle is: %f\n", 3.14*r*r);
}
float rect(float l, float b){
    printf("Enter the side of the rectangle is:\n");
    scanf("%f%f", &l, &b);
    printf("Area of the rectangle is: %f\n", l*b);
}