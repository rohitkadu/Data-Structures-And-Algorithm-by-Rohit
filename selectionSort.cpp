#include<iostream>
using namespace std;


void selectionSort(int arr[] , int n )
{
    int i , j ;

    for( i=0 ; i<n ; i++ )
    {
        for( j=i+1 ; j<n ; j++ )
        {
            if( arr[j] < arr[i] )
            {
                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }

    for( i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

}


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

    cout<<"\nOriginal Array : ";
    for( i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    cout<<"\n\nSorted Array ( Selection Sort ) : " ;
    selectionSort(arr,n);
    cout<<endl<<endl;
    return 0;
}