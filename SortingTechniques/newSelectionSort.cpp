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

void selectionSort( int arr[], int size)
{
    int step, i, min_index;

    for( step=0 ; step<size-1 ; step++ )
    {
        min_index = step;
        
        for( i=step+1 ; i<size ; i++ )
        {
            if( arr[i] < arr[min_index])
                min_index = i;
        }
        swapIndex(&arr[step], &arr[min_index]);

        // int temp = arr[step];
        // arr[step] = arr[min_index];
        // arr[min_index] = temp;
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

    selectionSort(arr, n);
    
    cout<<"\n\tSorted Array = ";
    printArray(arr, n);
    return 0;
}