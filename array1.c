#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    for (i=0;i<10;i++)
    {
        printf("\nEnter the %d Elements:= ",(i+1));
        scanf("%d",&a[i]);
    }
printf("\nSum of Elements are=");
    for (i=0;i<10;i++)
    {
        sum=sum+a[i];
       
    }
     printf("%d",sum);
    return 0;
}