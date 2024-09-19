#include<stdio.h>
int main()
{
int uniid;//university id variable
int lastdigit;
float discount;
int items;
int itemp;
int totalcost ;
float finalprice;
     

printf("Enter your University ID :\n ");
scanf("%d",&uniid);

printf("%d",uniid);

lastdigit = uniid % 10;

switch(uniid)
{
    case 0 :
     discount = 0.10;
     case 1 :
     discount = 0.10;
     case 2 :
     discount = 0.10;
     case 3 :
     discount = 0.10;
     case 4 :
     discount = 0.15;
     case 5 :
     discount = 0.15;
     case 6 :
     discount = 0.15;
     case 7 :
     discount = 0.20;
     case 8 :
     discount = 0.20;
     case 9 :
     discount = 0.20;

}

printf("Enter the number of the items : \n  ");
scanf("%d",&items);

totalcost=0;

if(lastdigit%2==0)
{
    for(int i=1;i<items;i++)
    {
     printf("Enter the price of the item = %d\n ",i);
     scanf("%d",&itemp);

    totalcost = totalcost+itemp;
    }
}
else
{
    int i=1;
    while(i< items)
    {
    printf("Enter the price of the item = %d\n ",i);
    scanf("%d",&itemp);
    totalcost = totalcost+itemp;
    i++;
    }

}

finalprice = totalcost - (totalcost * discount);

printf("Total Cost = %d\n ",totalcost);
printf("Discount = %d %\n ",discount);
printf("Final Price  = %f\n ",finalprice);













    return  0;
}