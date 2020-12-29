#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
		double bs;
	};
	struct emp e;
	fp=fopen("EMP.DAT","rb");
	if(fp==NULL)
	{
		puts("Cannot open file");
		exit(1);
	}
	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("%s %d %lf \n",e.name,e.age,e.bs);
	}
	fclose(fp);
}
