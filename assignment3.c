#include<stdio.h>
int main()
{

int temperature[12];//array[12] for 12 hours
int maxtemp;
int mintemp;
int ULABID;
int threshold;
int dayhour=12;//using 12 in loop because in day we got 12 hours

printf("Enter your ULAB ID last two non-zero digits in ascending order: ");
scanf("%d",&ULABID);



for(int i=0 ; i<dayhour ; i++)
{
    printf("Enter the tempreture for  %d hour :\n",i+1);
    scanf("%d",&temperature[i]);
}

threshold = 0;
for(int i=0 ; i<dayhour ; i++)
{
    if(ULABID>temperature[i])
    
      {threshold=threshold+1;}
    
}

maxtemp=temperature[0];
for(int i=0 ; i<dayhour ; i++)
{
    if(temperature[i]>maxtemp)
    maxtemp=temperature[i];
}
mintemp=temperature[0];
for(int i=0 ; i<dayhour ; i++)
{
    if(temperature[i]<mintemp)
    mintemp=temperature[i];
}






printf("Minimum temperature = %d\n ",mintemp);
printf("Maximum temperature = %d\n ",maxtemp);
printf("temperature dropped below the threshold= %d",threshold);














    return 0;
}