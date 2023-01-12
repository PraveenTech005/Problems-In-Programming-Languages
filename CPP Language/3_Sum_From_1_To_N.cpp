#include <iostream>
using namespace std;

int main()
{
    int n, i, sum=0;
    cout<<"Enter A Number For N : "<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
        sum += i;
    cout<<"Sum From 1 To N : "<<sum;
}