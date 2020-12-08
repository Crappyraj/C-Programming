#include<stdio.h>
void main()
{
	int m[100],i,n,p;
	printf("enter the number of elements in an array");
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
	printf("Enter the location of array to delete");
	scanf("%d",&p);
	if(p>=n+1)
	printf("deletetion not possible");
	else
	{
		for(i=p-1;i<n-1;i++)
		{
		
		m[i]=m[i+1];
	    }
	    printf("Resultant array");
	    for(i=0;i<n-1;i++)
	    {
	    	printf("%d\t",m[i]);
		}
	}
}
