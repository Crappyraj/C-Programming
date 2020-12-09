#include<stdio.h>
void main()
{
	int m[20],i,e=0,o=0;
	printf("Enter the elements of array");
	for(i=0;i<20;i++)
	{
		scanf("%d",&m[i]);

	}
	for(i=0;i<20;i++)
	{
		if(m[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
	
		}
	}
	printf("odd numbers in array are %d",o);
	printf("even numbers in array are",o);
}
