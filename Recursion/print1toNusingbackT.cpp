#include<iostream>
using namespace std;

void print1toNusingbackTracking(int i, int n)
{
    if( i<1 )
        return;
    else
    {
        print1toNusingbackTracking(i-1, n);
        cout<<i<<" ";
    }
}

int main()
{
    int n ;
    cout<<"\nEnter number : ";
    cin>>n;

    cout<<"\n1 to N = ";
    print1toNusingbackTracking(n, n);
    return 0;
}