#include<stdio.
h>
void main()
{
	int num1,num2,i,j,divsum1=0,divsum2=0;
	printf("Enter two numers to check whether amicable or not");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<num1;i++)
	{
		if(num1%i==0)
		{
			divsum1=divsum1+i;
		}
	}
		for(j=1;j<num2;j++)
	{
		if(num2%j==0)
		{
			divsum2=divsum2+j;
		}
	}
	if((num1==divsum2)&&(num2==divsum1))
	{
	printf("numbers are amicable numbers");
    }
	else
	{	
	printf("numbers are not amicable numbers");
    }
}

