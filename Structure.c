#include<stdio.h>
struct book
{
    char name[20];
    float price;
    int year;
};
int main()
{
    struct book b1={"Java" , 299.33 , 2004};
    printf("\nBook name,price and year is = %s\t\t%.2f\t\t%d",b1.name,b1.price,b1.year);

    
    
    return 0;
}
