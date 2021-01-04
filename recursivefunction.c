#include<stdio.h>
int displayNum(int);
int main()
{
    displayNum(10);
    return 0;  
}
int displayNum(int n)
{
    if(n<1)
    return 1;
    printf("\nValue of n=%d",n);
    displayNum(n-1);
}