#include <stdio>
void main()
{
	char a[45];
	int l,i;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		printf("\t%c",a[i]);
	}
	
}
