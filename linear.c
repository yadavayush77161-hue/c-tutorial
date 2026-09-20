#include <stdio.h>

struct book
{
    int page;
    float price;
};

int main()
{
    struct book b;

    printf("Enter pages: ");
    scanf("%d", &b.page);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nThe book information:\n");
    printf("Pages = %d\n", b.page);
    printf("Price = %.2f\n", b.price);
}