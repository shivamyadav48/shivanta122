#include <stdio.h>
int main(){
    float num1,num2,num3,num4,num5,avg;
    printf("enter a number :");
    scanf("%f",&num1);
    printf("enter a number :");
    scanf("%f",&num2);
    printf("enter a number :");
    scanf("%f",&num3);
    printf("enter a number :");
    scanf("%f",&num4);
    printf("enter a number :");
    scanf("%f",&num5);

    avg=(num1+num2+num3+num4+num5)/5;
    printf("average of the number is %.2f ",avg);
    return 0;
    
}