#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter  Number = ");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
            printf("%d\t",a[i][j]);
            }
            else
            printf("\t");

        }
        printf("\n");
    }
    return 0;
}