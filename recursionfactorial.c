#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("enter a number to get factorial: ");
    scanf("%d",&num);
    int r=fact(num);
    printf("The factorial of the number is %d",r);
    return 0;
}
int fact(int n)
{
    if(n<1)
    {
        return 1;
    }
    return n*fact(n-1);
}
    
