#include<iostream>
using namespace std;

void insertionSort(int arr[] , int n)
{
    int i , j , current ;
    
    for( i=0 ; i<n ; i++ )
    {
        current = arr[i] ;
        j = i-1 ;

        while( arr[j]>current && j>=0 )
        {
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = current ;
    }

    for( i=0 ; i<n ; i++ )
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

    cout<<"\n\nSorted Array ( Insertion Sort ) : " ;
    insertionSort(arr,n);
    cout<<endl<<endl;
    return 0;
}