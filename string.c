#include<stdio.h>
int main()
{
    char a[10],i;
        printf("\nEnter your name= ");
        scanf("%s",a);
printf("\nhello %s",a);
   for(i=0;a[i]!=NULL;i++)
    {
        printf("\n%c",a[i]);
    }
    return 0;
}