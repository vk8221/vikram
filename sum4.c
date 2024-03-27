#include<stdio.h>
int main()
{
    int num,x=0;
    printf("enter 4 digits number=");
    scanf("%d",&num);
    //x=x+num%10;
    num=num/10;
    x=x+num%10;
    num=num/10;
    //x=x+num%10;
    num=num/10;
    x=x+num%10;
    num=num/10;
printf("sum of 1st and 3rd digits=%d",x);
return 0;
}