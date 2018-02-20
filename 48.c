#include<stdio.h>
void main()
{
    int a[10],i,k,sum=0,sam;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
       sum=sum+a[i];
    }
    sam=sum/2;
    printf("%d",sam);
}
