/* WAP to conert temperature celcius into fahernheit */
# include<stdio.h>

float convertTempature(float celcius);

int main(){
    float far = convertTempature(37);
printf("far is %f:\n", far);
    return 0;
}

float convertTempature(float celcius) {
    float far = celcius * (9.0/5.0) + 32;
    return far;
}