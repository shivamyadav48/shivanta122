#include<stdio.h>
int main()
{
    int a=30, b=20;
    int add, sub, mul ,divide ,mod;
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    divide=a/b;
    mod=a%b;

    printf("sum is: %d/n,add",add);
    printf("sub value is :%d/n",sub);
    printf("mul value is :%d/n",mul);
    printf("division result is :%d/n",divide);
    printf("remainder is %d/n",mod);


    return 0;
}