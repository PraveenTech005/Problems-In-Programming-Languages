#include <iostream>
using namespace std;

int main()
{
    int i, j, n, leap;
    cout<<"Enter Current Year : "<<endl;
    cin>>n;

    leap=n;
    j=0;
    again:
    if(leap%4==0)
    {
        if(j==0)
            cout<<"It's A Leap Year :)\nCurrent "<<endl;
    }
    else
    {
        cout<<"It's Not A Leap Year ! \nAnyways :)\nComing ";
        j=1;
        leap+=1;
        goto again;
    }
    cout<<"Leap Year : "<<leap<<"\n\nNext 10 Leap Years Are : ";
    for(i=0;i<10;i++)
    {
        leap+=4;
        cout<<endl<<leap;
    }
        
}