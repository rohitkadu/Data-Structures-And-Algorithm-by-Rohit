// Friends Pairing using Recursion ( Bruteforce )

#include<iostream>
using namespace std;
static int recCount = 0 ;

int friendsPairs(int n)
{
    recCount++ ;
    if( n==0 || n==1 || n==2 )
    {
        recCount++ ;
        return n ;
    }

    return friendsPairs(n-1) + (n-1) * friendsPairs(n-2) ;
}


int main()
{
    int friends ;
    cout<<"\n\nFriends Pairing ( Recursion ) \n\n" ;
    cout<<"\tEnter number of frineds : ";
    cin>>friends;

    int numberOfPairs = friendsPairs(friends) ;
    printf("\n\n\tPossible Pairs for \'%d\' friends are \" %d \" . \n\n",friends, numberOfPairs) ;
    cout<<"\n\n\tRecursive Count : "<<recCount<<endl ;

    return 0;
}