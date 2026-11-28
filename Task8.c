#include<stdio.h>
void main()
{
  float storage,bill;
printf("enter the storage used in gb");
scanf("%f",&storage);
if(storage<=200)
{
bill=storage*0.80;
}
else if (storage<=300)
{
bill=(200*0.80+((storage-200)*0.90))
  }
  else
{
bill=(200*0.80)+(100*0.90)+((storage-300)*1.0);
}
bill=bill+100;
  {
bill=bill+(bill*0.15);
}
printf("the total amount payable is%f",bill);
}
