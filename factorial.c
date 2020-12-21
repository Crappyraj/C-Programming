#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the number to whose factorial to be determined=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of the number is %d",fact);
    return 0;
}