// Tower of Hanoi using Recursion 

#include<iostream>
using namespace std;


void towerOfHanoi(int n , char source , char intermediate , char destination )
{
    if( n== 0 )
    {
        return ;
    }

    towerOfHanoi(n-1 , source , destination , intermediate ) ; 
    printf("\tMove Disk %d from %c -> %c\n",n, source, destination) ;
    towerOfHanoi(n-1 , intermediate , source , destination ) ;

}

int main()
{
    cout<<"\n\nTower Of Hanoi - using ( Recursion ) \n\n" ;
    int n ;
    cout<<"Number of Disks : ";
    cin>>n;
    cout<<endl<<endl ;

    towerOfHanoi(n, 'S', 'I', 'D' );
    return 0;
}



