#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"\nEnter Size of Array : ";
    cin>>n;

    int arr[n];

    int i ;
    cout<<"\nEnter Elements of array :\n";
    for( i=0 ; i<n ; i++)
    {
        printf("\tElement %d = ",i+1);
        cin>>arr[i];
    }

    cout<<"\nArray : ";
    for( i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}