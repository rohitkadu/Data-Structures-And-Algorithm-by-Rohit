// Bubble Sort 
/*
Bubble Sort - Compare the adjacent elements and pop / bubble out largest number at right side .
Do this n-1 times and comparisons i = 0 to i = n - counter .
*/
#include<iostream>
using namespace std;


void bubbleSort(int arr[] , int n)
{
    int i ;
    int counter = 1 ;

    while( counter < n )
    {
        for( i=0 ; i<n-counter ; i++ )
        {
            if( arr[i] > arr[i+1] )
            {
                int temp = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = temp ;
            }
        }
        counter++ ;
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

    cout<<"\n\nSorted Array ( Bubble Sort ) : " ;
    bubbleSort(arr,n);
    cout<<endl<<endl;
    return 0;
}