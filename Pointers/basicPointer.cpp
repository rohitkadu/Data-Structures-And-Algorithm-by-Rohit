// Basic Pointer in C++

#include<iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"\nVariable A : ";
    cin>>a;
    printf("\tAddress of A is \'%d\' or \'%p\'\n",&a,&a);
    
    int *ptr = &a ;
    cout<<endl<<"\'ptr\' is pointer of Variable A .\n";
    printf("\tAddress of ptr is \'%d\' or \'%p\'\n",&ptr,&ptr);
    printf("\tValue of or at ptr is \'%d\' .\n\n",*ptr);

    return 0;
}