#include<stdio.h>
#include<stdlib.h>
struct book
{
    long int isbn;
    float price;
    char name[20];
};
typedef struct book book;

int main()
{
    book *b;
    int n,i;

    printf("How many books details you want to enter?\n");
    scanf("%d",&n);

    b=(book*)malloc(n*(sizeof(book)));
    printf("Enter the Details of %d Books\n",n);

    for(i=1;i<=n;i++)
    {
        printf("\t\tBOOK=%d",i);
        printf("\nName: ");
        scanf("%s",(b+i)->name);
        printf("I.S.B.N Number: ");
        scanf("%ld",&(b+i)->isbn);
        printf("Price: ");
        scanf("%f",&(b+i)->price);
    }

    for(i=1;i<=n;i++)
    {

        (*(b+i)).price=(*(b+i)).price - 0.05*((*(b+i)).price);

        printf("\n\t\tBOOK-%d",i);
        printf("\nName: %s\nI.S.B.N Number: %ld\nPrice: %.2f\n",(b+i)->name,(*(b+i)).isbn,(*(b+i)).price);
    }
    return 0;
}
