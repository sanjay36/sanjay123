#include<stdio.h>
void main()
{
int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
printf("Enter two num(intervals): ");
scanf("%d %d", &low, &high);
printf("Armstrong num between %d an %d are: ", low, high);
for(i = low + 1; i < high; ++i)
{
temp2 = i;
temp1 = i;
while (temp1 != 0)
{
temp1 /= 10;
++n;
}
