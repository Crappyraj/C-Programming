#include<stdio.h>

	void main()
	{
		int m[4][4],n[4][4],i,j;
	printf("enter the elements of matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
		printf("matrix is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",m[i][j]);
		}

			printf("\n\n");
		}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			n[j][i]=m[i][j];
		}
	}
		printf("transpose matrix is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",n[i][j]);
		}
			
			printf("\n\n");
		}
	}
		
