#include<stdio.h>
int main()
{
    float P,R,T,SI;
    printf("\nEnter the Principle Amount =");
    scanf("%f",&P);
    printf("\nEnter the Rate =");
    scanf("%f",&R);
    printf("\nEnter the Time =");
    scanf("%f",&T);
    SI= (P*R*T)/100;
    printf("\nSimple Interest is = %f",SI);

    return 0;
}