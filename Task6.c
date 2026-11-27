#include<stdio.h>
void main()
{
  int jump1,jump2,jump3,longest;
printf("enter the 3 jumps");
scanf("%d%d%d",&jump1,&jump2,&jump3);
longest=jump1;
if(jump2>longest)
longest=jump2;
if(jump3>longest)
longest=jump3;
printf("the longest distance is %d",longest);
}
