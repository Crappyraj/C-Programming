#include<stdio.h>
void main()
{
	int m[]={12,34,25,8,66,55,44,77,65,4},i,max=0;
	for(i=0;i<10;i++)
	{
		if(max<m[i])
		max=m[i];
	}
	printf("the greatest number is %d",max);
}
