#include<stdio.h>
int main()
{
    int x=20,*y,**z,***c,****a;
    y=&x;
    z=&y;
    c=&z;
    a=&c;
    printf("\nvalue of x=%d",x);
    printf("\naddress of varible =%u",&x);
    printf("\nvalue of%u is &d",y,*y);
    printf("\naddress of y =%u",z);
    printf("\naddress of x =%u",*z);
    printf("\nvalue of x =%u",**z);
    printf("\nvalue of y =%u",***c);
    printf("\nvalue of x =%u",****a);
    printf("\nadderss of z =%u",c);
    return 0;
}