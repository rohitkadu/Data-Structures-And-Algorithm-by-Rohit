/*
    Quick Sort 
        1. Select pivot element.
        2. small elements on left and large elements on right
*/

/*
    Merge Sort : Divide & then MERGE
*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void printArray(vector<int> arr)
{
    for( auto it : arr )
    {
        cout<<it<<" ";
    }
}

void swap( vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition( vector<int> &arr, int low, int high )
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while( i<j )
    {
        while( arr[i] <= pivot && i <= high-1 )
        {
            i++;
        }
        while( arr[j] > pivot && j >= low+1 )
        {
            j--;
        }

        if( i<j )
        {
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
            swap(arr, i, j);
        }
    }

    // int temp = arr[low];
    // arr[low] = arr[j];
    // arr[j] = temp;
    swap(arr, low, j);

    return j;
}


void quickSort( vector<int> &arr, int low, int high )
{
    if( low < high )
    {
        int partitionIndex = partition(arr, low, high);

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}


int main()
{
    int n;
    vector<int> arr;

    cout<<"Enter Size of array : ";
    cin>>n;

    // populating vector
    for( int p=0 ; p<n ; p++ )
    {
        int num = rand()%100+1;
        arr.push_back(num);
    }

    cout<<"\n\tOriginal Array = ";
    printArray(arr);


    quickSort(arr, 0, n-1);

    
    cout<<"\n\tSorted Array = ";
    printArray(arr);
    return 0;
}