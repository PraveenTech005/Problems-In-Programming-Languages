#include <iostream>
using namespace std;

int main()
{
    char Uname[50];
    string Fname;
    cout<<"Enter Your First Name : "<<endl;                            //It Only Reads Until You Press Space
    cin>>Uname;                                                        //If You Type - For Ex.("Praveen Tech") 
    cout<<"Hello, "<<Uname<<". Welcome To CPP Repository"<<endl;//It Takes "Praveen" As Input

    cout<<"Enter Your First Name : "<<endl;//It Also Only Reads Until You Press Space
    fflush(stdin);                        //Here fflush() For Clear Garbage/random Values
    cin>>Fname;                           //If You Type - For Ex.("Praveen Tech"), It Takes "Praveen" As Input
    cout<<"Hello, "<<Fname<<". Welcome To CPP Repository"<<endl;

    cout<<"Enter Your Full Name : "<<endl;//It Reads Until You Press Enter
    fflush(stdin);                        //Here fflush() For Clear Garbage/random Values
    getline(cin, Fname);                  //If You Type - For Ex.("Praveen Tech") 
    cout<<"Hello, "<<Fname<<". Welcome To CPP Repository"<<endl;//It Takes "Praveen Tech" (Full Text) As Input Because Of String Data Type
}