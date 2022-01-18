// Printing Fibonacci Series using Recursion .

#include<iostream>
using namespace std;

int recFibonacci(int n)
{
    if( n==0 || n==1 )
    {
        return n;
    }

    return recFibonacci(n-1) + recFibonacci(n-2) ;

}


int main()
{
    int n;
    cout<<"\n\nPrinting Fibonacci Series using Recursion .\n\n" ;
    cout<<"Enter Fibonacci Series Limit : " ;
    cin>>n ;

    cout<<recFibonacci(n);
    return 0;
}