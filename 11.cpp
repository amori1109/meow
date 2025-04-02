#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    b=(a/10);
    c=a-(b*10);
    printf("the last digit is%d",c);
    return 0;
}
