#include<stdio.h>
void main()
{
	char str[100];
	int count[26],i,l;
	printf("enter the string");
	gets(str);
	for(i=0;i<26;i++)
	{
		count[i]=0;
	}
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		count[str[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
	if(count[i]!=0)
	{
		printf("\n occurence of %c = %d\n",i+97,count[i]);
		}	
	}
	
	
}
