#include<stdio.h>
void main()
{
	int m[]={13,12,15,14,16},i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+m[i];
	}
	printf("sum of array is %d",sum);
}
