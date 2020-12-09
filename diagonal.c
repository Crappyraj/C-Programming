#include<stdio.h>

	void main()
	{
		int m[4][4], i,j,rd=0,ld=0,k=3;
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
		ld=ld+m[i][i];
	}
	printf("sum of left diagnol is %d\n",ld);
	for(i=0;i<4;i++)
	{
		rd=rd+m[i][k];
		k=k-1;
	}
	printf("sum of right diagnol is %d",rd);
}
