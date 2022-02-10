#include<iostream>
using namespace std;

// Creating Class
class MyClass {
    public :
        string MyName ;
        int RollNo ;
} ;

int main()
{
    //Creating Object
    MyClass MyObject ;

    cout<<"\n\n\tEnter Name : ";
    getline(cin, MyObject.MyName);
    cout<<"\tRoll Number : ";
    cin>>MyObject.RollNo;

    cout<<"\n\nStudent Name : "<<MyObject.MyName<<endl;
    cout<<"Roll Number : "<<MyObject.RollNo;

    return 0;
}