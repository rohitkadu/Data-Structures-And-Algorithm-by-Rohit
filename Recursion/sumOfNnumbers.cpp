// Sum of first N natural numbers using Recursion .

#include<iostream>
using namespace std;

int recSumOfN(int n)
{
    if( n == 0)
    {
        return 0 ;
    }
    
    /*
    int prevSum = recSumOfN(n-1) ;
    return n + prevSum ;
    */

    return n + recSumOfN(n-1) ;

}

int main()
{
    int n ;
    cout<<"\n\nSum of N numbers using Recursion .\n\n";
    cout<<"\tEnter any Number : ";
    cin>>n;

    printf("\n\tSum of first \' %d \' natural number is = \" %d \" \n\n",n,recSumOfN(n));

    return 0;
}