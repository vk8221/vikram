#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the Value of A =");
    scanf("%d",&a);
    printf("\nEnter the Value of B =");
    scanf("%d",&b);
    if (a>b)
    {
        printf("\nBiggest Value is =%d",a);
    }
    else
    {
        printf("\nBiggest Value is =%d",b);
    }
    
    return 0;
}