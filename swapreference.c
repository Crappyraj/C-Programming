#include<iostream.h>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=a;
}
int main()
{
int a=50;
int b= 100;
swap(a,b);
cout<<a<<b;
}
