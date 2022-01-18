// Power of N using Recursion

#include<iostream>
using namespace std;

int recPowerOfN(int n, int p)
{
    if( p == 0 )
    {
        return 1 ;
    }

    /*
    int prevPower = recPowerOfN(n,p-1) ;
    return n * prevPower ;
    */

   return n * recPowerOfN(n, p-1) ;
}

int main()
{
    int n , p ;
    cout<<"\n\nPower of N using Recursion - n ^ p \n\n";
    cout<<"\tEnter Base : ";
    cin>>n;
    cout<<"\tEnter Exponent : ";
    cin>>p;

    printf("\n\n\t%d rasied to the power %d ( %d ^ %d ) = \" %d \" ",n,p,n,p,recPowerOfN(n,p)) ;
    return 0;
}