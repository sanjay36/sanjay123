#include<stdio.h>
#include<string.h>

void main()
{
	char v[100];
	int l,i;
	gets(v);
	l=strlen(v);
	for(i=0;i<l;i++)
	{
	    if(i==0)
	    {
	    v[0]=toupper(v[0]);
	    }
	    if(v[i]==' ')
	    {
	    v[i+1]=toupper(v[i+1]);
	    }
	    
	}
	printf("%s",v);
		
}
