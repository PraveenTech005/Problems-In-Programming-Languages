#include <iostream>
using namespace std;
int main()
{
    int a[100], i, s=2147483647,n;
    cout<<"\nEnter The Limit : "<<endl;
    cin>>n;
    cout<<"\nEnter 5 Numbers To Find Smallest One : "<<endl;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]<s)
            s=a[i];
    }

    cout<<"\nSmallest Number Is : "<<s;
}