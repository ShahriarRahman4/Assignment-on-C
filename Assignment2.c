#include<stdio.h>
int main()
{
int tempreture,weight;
float q1,q2,q3,q4,totalenergy;

int shofice=2100 ;   // Specific heat capacity of ice 2100 J/kg°C for converting 0°C ice
int lhofice =334000 ; // Latent heat of fusion 334000 J/kg for  converting 0°C ice to 0°C water
int shofwater = 4186 ; // Specific heat capacity of water 4186J/kg°C for convering 0°C water  to 100 °C water
int lhofwater = 2260000 ;// Latent heat of vaporization 2260000 J/kg for converting 100 °C water to 100 °C steam

printf("Enter the initial temperature of ice in °C = ");
scanf("%d", &tempreture);
printf("Enter the weight of ice in kg = ");
scanf("%d",&weight);

 // converting 0°C ice
q1= weight * shofice *(0 - tempreture);

// converting 0°C ice to 0°C water
q2 = weight * lhofice;

// converting 0°C water  to 100 °C water
q3 = weight * shofwater * (100 - 0);

// converting 100 °C water to 100 °C steam
q4 = weight * lhofwater ;

totalenergy = q1 + q2 + q3 + q4;

printf("Total energy consumed = %.2f Joules",totalenergy);



    return 0;
}