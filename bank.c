#include<stdio.h>
int pass[]={1001,1002,1003,1004};
int bal=0;
void credit(int b)
{
	bal=bal+b;
	printf("final amount is %d\n",bal);
}
void debit(int b)
{
if(b>bal)
{
	printf("Insufficient amount\n");
}
else
{
	bal=bal-b;
	printf("final amount is %d\n",bal);
}
}
int check(int pin)
{
	int i,flag=0;
	for(i=0;i<4;i++)
	{
		if(pin==pass[i])
		{
			flag=1;
	    }
	}
	return flag;
}
main()
{
	int count=0;
	while(1)
	{
	int pin,choice,amt;
	printf("Enter Pin");
	scanf("%d",&pin);
	if(check(pin))
	{
		do
		{
			printf("1 for credit | 2 for debit | 3 for exit\n\n");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					printf("Enter amount for credit");
					scanf("%d",&amt);
					credit(amt);
					break;
				case 2:
					printf("Enter amount for debit");
					scanf("%d",&amt);
					debit(amt);
					break;	
				default:
				printf("Thanks for using our service. Goodbye");				
			}
		}while(choice<3);
	}
	else
	{
		count++;
		printf("Sorry, you entered a wrong pin %d times\n\n",count);
		if(count>=3)
.		{
			printf("Your account is disabled for 24 hours");
			exit(0);
		}
	}
}
}                                                                                                                                                                     
