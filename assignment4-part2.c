#include<stdio.h>
int main()
{
    int uniid; //university id variable
    int lastdigit;
    float discount = 0.0;  
    int items;
    int itemp;
    int totalcost;
    float finalprice;
    
    printf("Enter your University ID :\n ");
    scanf("%d", &uniid);

    printf("Your University ID is: %d\n", uniid);

    lastdigit = uniid % 10;

    switch(lastdigit)  
    {
        case 0:
        case 1:
        case 2:
        case 3:
            discount = 0.10;
            break;
        case 4:
        case 5:
        case 6:
            discount = 0.15;
            break;
        case 7:
        case 8:
        case 9:
            discount = 0.20;
            break;
    }

    printf("Enter the number of the items: \n");
    scanf("%d", &items);

    totalcost = 0;

    if(lastdigit % 2 == 0)
    {
        for(int i = 1; i <= items; i++)
        {
            printf("Enter the price of item %d in BDT: ", i);
            scanf("%d", &itemp);
            totalcost =totalcost + itemp;
        }
    }
    else
    {
        int i = 1;
        while(i <= items)
        {
            printf("Enter the price of item %d in BDT: ", i);
            scanf("%d", &itemp);
            totalcost  =totalcost + itemp;
            i++;
        }
    }

    finalprice = totalcost - (totalcost * discount);

    printf("Total Cost = %d BDT\n", totalcost);
    printf("Discount = %.2f%%\n", discount * 100);  
    printf("Final Price = %.2f BDT\n", finalprice);

    return 0;
}
