#include<stdio.h>
int main()
{
int qapple = 2 ;//quantity of Apple=2kg
int qbread  =  1 ;//quantity of Bread=1kg
int qmilk = 4 ; //quantity of Milk = 4 litre

float  papple = 340 ;/* price of apple=340tk (per kg) according to SobjiBazar*/
float  pbread = 150; /*price of bread=150tk (per kg) according to SobjiBazar*/
float  pmilk = 75 ;/*price of milk(Aarong Dairy Full Cream Liquid Milk )=75tk (per litre) according to SobjiBazar*/

float totalcost;
float salestax;
float finalammount;

totalcost=(papple*qapple)+(pbread*qbread)+(pmilk*qmilk);
salestax = totalcost*0.05;

finalammount = totalcost + salestax;

printf("Total Cost = %0.2f \n",totalcost);
printf("Sales Tax = %0.2f\n",salestax);
printf("Final Amount = %0.2f\n",finalammount);








    return 0;
}