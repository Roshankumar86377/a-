/* WAP to percentage by the use of recursion */
# include<stdio.h>

float calPercentage(float hindi, float english, float math);

int main(){
    float hindi;
    printf("Enter Hindi marks:\n");
    scanf("%f", &hindi);
    float english;
    printf("Enter english marks:\n");
    scanf("%f", &english);
    float math;
    printf("Enter math marks:\n");
    scanf("%f", &math);

    printf("Percentage is %f:\n", calPercentage(hindi,english,math));

    return 0;
}

float calPercentage(float hindi, float english, float math) {
return (hindi+english+math)/3;

}