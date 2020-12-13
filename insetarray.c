#include<stdio.h>
void main()
{
	int m[100],n,i,p,v;
	printf("how many elements you want to enter");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\n\nYour curret array is");
	for(i=0;i<n;i++)
	{
		printf("%d\t",m[i]);
	}
	
	printf("\n\nNow enter the new number and position");
	scanf("%d%d",&v,&p);
		for(i=n-1;i>=p-1;i--)
		{
			m[i+1]=m[i];
	
		}
		 
		 m[p-1]=v;
		 
		 printf("\n\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",m[i]);
	}
}
