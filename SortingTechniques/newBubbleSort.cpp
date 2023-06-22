#include<iostream>
#include<cmath>
using namespace std;

void printArray(int arr[], int n)
{
    for( int i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
    }
}

void swapIndex(int *i, int *min_index)
{
    int temp = *i;
    *i = *min_index;
    *min_index = temp;
}

void bubbleSort( int arr[], int size)
{
    int i, j;
    bool swap = false;

    for( i=0 ; i<size-1 ; i++)
    {
        for( j=0 ; j<size-i-1 ; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                swapIndex(&arr[j], &arr[j+1]);
                swap = true;
            }
        }
        
        if( swap == false )
            break;
    }
}

int main()
{
    int n;
    int arr[100];
    cout<<"Enter Size of array : ";
    cin>>n;

    // populating array
    for( int p=0 ; p<n ; p++ )
    {
        arr[p] = rand()%100+1;
    }

    cout<<"\n\tOriginal Array = ";
    printArray(arr, n);

    bubbleSort(arr, n);
    
    cout<<"\n\tSorted Array = ";
    printArray(arr, n);
    return 0;
}