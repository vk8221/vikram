#include<stdio.h>
int main()
{
    float m,d,np;
    printf("\nEnter the MRP of Book =");
scanf("%f",&m);
printf("\nEnter the Discount Percentage =");
scanf("%f",&d);
d= m*d/100;
np= m-d;
printf("\nNet Price of Book is %f",np);
    return 0;
}