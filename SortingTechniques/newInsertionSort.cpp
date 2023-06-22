/*
    Insertion Sort : a key element is compared with predecessors and swapped to its coorrect position
*/

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

void insertionSort( int arr[], int size)
{
    int i, j;
    int key;

    for( i=1 ; i<size ; i++ )
    {
        key = arr[i];
        j = i-1;

        while( arr[j]>key && j>=0 )
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = key;
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

    insertionSort(arr, n);
    
    cout<<"\n\tSorted Array = ";
    printArray(arr, n);
    return 0;
}