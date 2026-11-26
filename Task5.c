#include<stdio.h>
#include<math.h>
void main()
{
int x1,y1,x2,y2,dist,answer;
printf("enter the value for x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dist=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("dist is:%d",dist);
answer=sqrt(dist);
printf("answer is:%d",answer);
}
