#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter a number";
    cin>>n;
    while(n>=0)
    {
        sum=sum+n;
        cout<<"enter a number";
        cin>>n;

    }
    cout<<"the sum is"<<sum<<"\n";
    return 0;
}