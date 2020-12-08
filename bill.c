#include<stdio.h>
void main()
{
	int unit;
	double bill;
	printf("Enter the number of units");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill=unit*4;
	}
	if(unit>=100&&unit<=200)
	{
		bill=(100*4+(unit-100)*4.5);
	}
	if(unit>=200&&unit<=300)
	{
		bill=(100*4+100*4.5+(unit-200)*5);
	}
	if(unit>=300)
	{
		bill=(100*4+100*4.5+100*5+(unit-300)*5.25);
	}
	printf("total bill is %lf",bill);
}
