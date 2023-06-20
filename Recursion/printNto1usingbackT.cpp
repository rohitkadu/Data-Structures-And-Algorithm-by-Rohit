#include<iostream>
using namespace std;

void printNto1usingbackTracking(int i, int n)
{
    if( n<i )
        return;
    else
    {
        printNto1usingbackTracking(i+1, n);
        cout<<i<<" ";
    }
}

int main()
{
    int n ;
    cout<<"\nEnter number : ";
    cin>>n;

    cout<<"\nN to 1 = ";
    printNto1usingbackTracking(1,n);
    return 0;
}