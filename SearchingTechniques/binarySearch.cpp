#include<iostream>
using namespace std;


int binarySearch(int arr[], int n , int searchMe)
{
    int start = 0 ;
    int end = n ;
    int mid ;

    while( start <= end )
    {

        mid = ( start + end ) / 2 ;

        if( arr[mid] == searchMe )
        {
            return mid ;
        }
        else if( arr[mid] > searchMe )
        {
            end = mid - 1 ;
        }
        else 
        {
            start = mid + 1 ;
        }
    }

    return -1 ;
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

    cout<<"\nArray : ";
    for( i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    int searchMe ;
    cout<<"\n\nEnter Element to be searched : ";
    cin>>searchMe;

    int index = binarySearch(arr,n,searchMe);

    if( index != -1 )
    {
        printf("\n\t*** %d found at index \' %d \' ***\n\n",searchMe,index);
    }
    else
    {
        printf("\n\t!!! %d not found in Array !!!\n\n",searchMe);
    }


    return 0;
}