#include<stdio.h>
void main()
{
	char ch[100];
	int i,l,k=0;
	printf("Enter a string\n");
	gets(ch);
	l=strlen(ch);
	for(i=0;i<l;i++)
	{
		if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u')||(ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U'))
	{
		k++;
	}
	}
	printf("total number of vowels are %d",k);
}
