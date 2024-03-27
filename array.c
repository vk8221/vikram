#include<stdio.h>
int main()
{
    int a[5],i;
    for (i=0;i<5;i++)
    {
        printf("\nEnter the %d Elements:= ",(i+1));
        scanf("%d",&a[i]);
    }
printf("\nThe Elements are=");
    for (i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}