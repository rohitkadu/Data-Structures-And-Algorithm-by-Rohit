// Factorial of Number using Recursion 

#include<iostream>
using namespace std;

int recFact( int n )
{
    if( n == 1 )
    {
        return 1 ;
    }

    /*
    int prevFact = recFact(n-1);
    return n * prevFact ;
    */

   return n * recFact(n-1) ;
}


int main()
{
    int n ;
    cout<<"\n\nFactorial of Number using Recursion . \n\n";
    cout<<"\tEnter any Number : ";
    cin>>n ;

    printf("\n\tFactorial of Number \'%d\' is fact(%d) = %d ",n,n,recFact(n)) ;

    return 0;
}