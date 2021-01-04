#include<stdio.h>
void main()
{
	int n,r=0,s=0,temp=0;	
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		s=s+(r*r*r);
		temp=temp/10;
	}
	
	if(s==n)
	{
	printf("Armstrong number");
}
	else
	{
	
	printf("Not a Armstrong number");
}
}

	
