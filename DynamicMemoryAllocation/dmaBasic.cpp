// Basic Dynamic Memory Allocation

#include<iostream>
using namespace std;

int main()
{
    int *p = NULL ;
    p = new int;
    *p = 10 ;

    int *q = new int(25);

    cout<<"\nValue of P : "<<*p<<endl;
    cout<<"\tAddress of P : "<<&p;
    cout<<"\nValue of Q : "<<*q<<endl;
    cout<<"\tAddress of Q : "<<&q;

    delete p ;
    delete q ;

    return 0;
}