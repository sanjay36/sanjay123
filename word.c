#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        default:
        printf("enter the number between 1 and 3");
        return 0;
    }
}
