#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in fahrenheirt:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("celsius=%f\n",celsius);
    return 0;
}
