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


void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid+1;

    while( left<=mid && right<=high )
    {
        if( arr[left] < arr[right] )
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while( left<=mid )
    {
        temp.push_back(arr[left++]);
    }
    while( right<=high )
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}


void mergeSort(vector<int> &arr, int low, int high)
{
    if( low == high )
        return;
    
    int mid = ( low + high ) / 2 ;
    
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
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


    mergeSort(arr, 0, n-1);

    
    cout<<"\n\tSorted Array = ";
    printArray(arr);
    return 0;
}