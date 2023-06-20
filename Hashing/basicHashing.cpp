#include<iostream>
#include<cmath>
using namespace std;

int hashArray[100000000];
int arr[100000000];

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"\nArray = ";
    for( int j=0 ; j<n ; j++ )
    {
        arr[j] = rand()%10+1;
        cout<<arr[j]<<" ";
    }

    for( int i=0 ; i<=n ; i++ )
    {
        hashArray[arr[i]] += 1 ;
    }

    cout<<"\nOccurences of : \n";
    for( int i=1 ; i<=10 ; i++ )
    {
        printf("\t%d = %d\n", i, hashArray[i]);
    }
    return 0;
}