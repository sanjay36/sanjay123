#include<stdio.h>
#include<string.h>
void main()
{
int r=0,t;
scanf("%d",&t);
while(t!=0)
{
r=r* 10;
r= r+t%10;
t= t/10;
}
printf("%d",t);
}
