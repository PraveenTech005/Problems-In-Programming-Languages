#include <iostream>
using namespace std;

int main()
{
    int t, n, i;
    cout<<"Enter A Table You Want : "<<endl;
    cin>>t;
    cout<<endl<<"Number Upto : "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
        cout<<endl<<t<<" X "<<i<<" = "<<t*i;
}