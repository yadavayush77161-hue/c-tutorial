#include <stdio.h>

struct book
{
    int page;
    float price;
};

int main()
{
    struct book c;
    struct book b;    

    printf("Enter pages: ");
    scanf("%d", &c.page , &b.page);

    printf("Enter price: ");
    scanf("%f", &c.price,&b.price);

    printf("\nThe book information:\n");
    printf("Pages = %d\n", c.page);
    printf("Price = %.2f\n", c.price);

    printf("\nThe book information 2 :\n");
    printf("Pages = %d\n", b.page);
    printf("Price = %.2f\n",b.price);
}