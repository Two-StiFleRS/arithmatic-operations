#include<stdio.h>
int main()
{
    int num1,num2,remainder;
    printf("enter divisior:\n");
    scanf("%d",&num1);
    printf("enter the number by which divisor will be divided\n");
    scanf("%d",&num2);
    remainder=num1%num2;
    printf("remainder after the division of two numbers: %d",remainder);
    return 0;
}
