#include<iostream>
using namespace std;


int linearSearch(int arr[] , int n , int searchMe)
{
    for(int i=0 ; i<n ; i++ )
    {
        if( arr[i] == searchMe )
        {
            return i ;
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

    int index = linearSearch(arr,n,searchMe) ;
    
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