#include <iostream>
using namespace std;

int main()
{
    int n, i, j, prime;
    cout<<"Enter A Limit : "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                prime++;
        }
        if(prime==0)
            cout<<endl<<i;
    }

}