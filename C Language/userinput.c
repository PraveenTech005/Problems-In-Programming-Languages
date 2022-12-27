#include <stdio.h>

int main()
{
    char Uname[50];
    printf("Enter Your First Name : \n");                           //It Only Reads Until You Press Space
    scanf("%s\n",&Uname);                                         //If You Type - For Ex.("Praveen Tech") 
    printf("Hello, %s. Welcome To C Language Problems\n", Uname); //It Takes "Praveen" As Input

    printf("Enter Your Full Name : \n");                          //It Reads Until You Press Enter
    fflush(stdin);                                                //If You Type - For Ex.("Praveen Tech")
    gets(Uname);                                                  //It Takes "Praveen Tech" (Full Text) As Input
    printf("Hello, %s. Welcome To C Language Problems\n",Uname);  //Here fflush() For Clear Garbage(random) Values
}                                                                 //gets() For Read Input