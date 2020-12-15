#include<stdio.h>
void main()
{
	int r=3,c=3,mat[r][c],i,j,s=0,csum[c],k=0,cs=0;
	printf("enter the elements for %d X %d matrix",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n\n matrix is\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+mat[i][j];
			cs=cs+mat[j][i];
			printf("%d\t",mat[i][j]);
		}
		printf("\t%d",s);
		csum[k]=cs;
		cs=0;
		k++;
		s=0;
		printf("\n\n");
    }
	
	for(i=0;i<c;i++)
	{
		printf("%d\t",csum[i]);
	}
	

}
