#include<stdio.h>
void main()
{
	int min,max;
	scanf("%d",&min);
	scanf("%d",&max);
	while(min<max-1)
	{
		min++;
		printf("%d",min);
	}
}
