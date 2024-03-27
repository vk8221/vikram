#include<stdio.h>
int main()
{
    int cp,sp;
    printf("\nEnter the Cost Price of Book =");
    scanf("%d",&cp);
    printf("\nEnter the Sale Price of Book =");
    scanf("%d",&sp);
    if (sp>cp)
    {
        printf("\n Profit");
    }
    else
    {
        printf("\n Loss");
    }
    return 0;
}