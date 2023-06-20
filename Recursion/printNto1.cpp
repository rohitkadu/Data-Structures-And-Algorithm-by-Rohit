#include<iostream>
using namespace std;

void printNto1(int n)
{
    if ( n == 0 )
        return;
    else 
    {
        cout<<n<<" ";
        printNto1(--n);
    }
}

int main()
{
    int n;
    cout<<"\nEnter number : ";
    cin>>n;

    printNto1(n);
    return 0;
}