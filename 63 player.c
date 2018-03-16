#include <stdio.h>
 
void main()
{
	int sam,sum=0,sq,rem;
	scanf("%d",&sam);
	while(sam!=0)
	{
		rem=sam%10;
		sq=rem*rem;
		sum=sum+sq;
		sam=sam/10;
	}
	printf("\n%d",sum);
}
