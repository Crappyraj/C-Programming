#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three sides of triangle \n";
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
    cout<<"Equilateral Triangle \n";
    }
    else if(a==b || b==c || c==a)
    {
    cout<<"Isoceles Triangle \n";
    }
    else
    {
    cout<<"Scalene Triangle \n";
    }
    return 0;

    

}