#include<stdio.h>

void main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a<=b&&a<=c)
        printf("a = %d is smallest",a);
    if (b<=a&&c<=b)
        printf("b = %d is smallest",b);
    if (c<=a&&c<=b)
        printf("c = %d is smallest",c);

}