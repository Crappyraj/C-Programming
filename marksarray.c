#include<stdio.h>
void main()
{
	int marks[5],i;
	printf("Enter the marks");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);	
	}
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf("marks in subject %d = %d \n",i+1,marks[i]);
	}
}
