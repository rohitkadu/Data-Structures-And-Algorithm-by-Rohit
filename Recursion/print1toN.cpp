#include<iostream>
using namespace std;

void print1toN(int i, int n)
{
    if( i>n ) return ;
    else
    {
        cout<<i<<" ";
        print1toN(i+1, n);
    }
}

int main()
{
    int n;
    int i=1;
    cout<<"\nEnter number : ";
    cin>>n;

    cout<<"\n1 to N = ";
    print1toN(i,n);
    return 0;
}