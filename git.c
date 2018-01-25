#include <stdio.h>
void main()
{
char x[200];
int i=0;count=0;
printf("enter the string");
while(x[i]!='\0')
{
if(x[i]=='.')
count++;
i++;
}
printf("number of words in string %d",count+1);
}
