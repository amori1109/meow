#include<stdio.h>
int main(){
    int a,b,c;
    //input two numbers
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("first number=%d\n",a);
    printf("second number=%d\n",b);
    //swapping using third variable
    c=a;
    a=b;
    b=c;
    printf("first number=%d\n",a);
    printf("second number=%d\n",b);
    return 0;
}
    
