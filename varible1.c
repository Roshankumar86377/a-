/* WAP to print area of a rectangle, square, circle, triangle and trapezium */
# include<stdio.h>
int main(){
    // area of a rectangle is length*breath//
    // legth=a, breath=b// 
    float a;
    float b;
    printf("enter length\n");
    scanf("%f", &a);
    printf("enter breath");
    scanf("%f", &b);
    printf("Area of a rectangle is %f\n", a*b);


    // area of square is side*side //
    // side=c//
    float c;
    printf("enter side\n");
    scanf("%f", &c);
    printf("Area of a square is %f\n", c*c);


    // area of a circle is pi*radius*radius//
    // radius=r , pi=3.14//
    float r;
    float pi=3.14;
    printf("enter radius\n");
    scanf("%f", &r);
    printf("area of a circle is %f\n", pi*r*r);

    // area of triangle is 0.5*base*height//
    // base=p,  height=q//
    float p;
    printf("enter base\n");
    scanf("%f", &p);
    float q;
    printf("enter height\n");
    scanf("%f", &q);
    printf("Area of a triangle is %f\n22", 0.5*p*q);

    // area of a trapizeum is 0.5*(sum of parellel side)*height//
    // parellel side1=x, parellel side2=y,height=z//
    float x;
    printf("enter parellel side1\n");
    scanf("%f", &x);
    float y;
    printf("enter parellel side2\n");
    scanf("%f", &y);
    float z;
    printf("enter height\n");
    scanf("%f", &z);
    printf("Area of a trapizeum is %f\n", 0.5*(x+y)*z);

    return 0;
}