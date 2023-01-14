#include <iostream>
using namespace std;
int main()
{
    int a[100], i, b=0,n;
    cout<<"\nEnter The Limit : "<<endl;
    cin>>n;
    cout<<"\nEnter 5 Numbers To Find Biggest One : "<<endl;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]>b)
            b=a[i];
    }

    cout<<"\nBiggest Number Is : "<<b;
}