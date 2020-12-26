#include<stdio.h>
void main()
{
	int n,r=0,s=0,temp;	
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==n)
	printf("palindrome number");
	else
	printf("Not a palindrome number");

}
	
