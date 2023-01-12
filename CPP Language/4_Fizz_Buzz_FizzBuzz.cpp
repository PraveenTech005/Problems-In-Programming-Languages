#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter A Number : "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%5==0 && i%3==0)
            cout<<i<<" - FizzBuzz"<<endl;
        else if(i%5==0)
            cout<<i<<" - Buzz"<<endl;
        else if(i%3==0)
            cout<<i<<" - Fizz"<<endl;
        else cout<<i<<endl;
    }
}