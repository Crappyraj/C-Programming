#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char another='y';
	struct emp
	{
		char name[40];
		int age;
		double bs;
	};
	struct emp e;
	fp=fopen("EMP.DAT","ab");
	if(fp==NULL)
	{
		puts("Cannot open file");
		exit(1);
	}
	while(another=='y')
	{
		printf("\n Enter name,age,basic salary");
		scanf("%s %d %ls",e.name,&e.age,&e.bs);
		fwrite(&e,sizeof(e),1,fp);
		printf("add another record(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	return 0;
}
