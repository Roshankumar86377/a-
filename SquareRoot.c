/* WAP to print an EQUATION of ROOTS */
# include<stdio.h>
# include<math.h>
int main(){
    float a,b,c,d,x,y;
    printf("Enter the Equation\n");
    scanf("%f %f %f", &a ,&b ,&c);
    d= (b*b)-(4*a*c);
    if(d<0){
        printf("Roots are the Imaginary\n");
    }
    else{
        x = (-b + sqrt(d))/(2*a);
        y = (-b - sqrt(d))/(2*a);
        printf("The ROOTS are :%f\n %f\n", x, y);
    }
    return 0;
}