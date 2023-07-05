/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
*/

#include<iostream>
#include<vector>
using namespace std;

void printArr( vector<int> arr )
{
    for( auto it: arr)
        cout<<it<<" ";
    cout<<endl;
}

int smallestElementIndex( vector<int> &arr, int size)
{
    int smallest = 0;

    for( int i=1 ; i<size ; i++)
    {
        if( arr[i] <= arr[smallest] )
            smallest = i;
    }
    
    return smallest;
}

bool sortedOrNot( vector<int> arr )
{
    int len = arr.size();
    int firstIndex = smallestElementIndex(arr, len);
    int i;

    // cout<<"\n\tFirst Element Index = "<<firstIndex<<endl;

    if (arr[firstIndex] == arr[(firstIndex + len - 1) % len])
            return true;

    vector<int> temp;

    for( i=0 ; i<len ; i++ )
    {
        int element = arr[(i+firstIndex)%len];
        temp.push_back(element);
    }

    cout<<"\nTemp Array = ";
    printArr(temp);

    for( i=1 ; i<len ; i++ )
    {
        if( temp[i] < temp[i-1] )
        {
            return false;
            break;
        }
    }

    return true;
}


int main()
{
    vector<int> arr = {1 ,3 ,9 ,6 ,10, 5, 3, 8, 9, 1};
    // vector<int> arr = {7,5 ,2 ,2 ,7 ,3 ,5, 4};

    cout<<"OG Arr = ";
    printArr(arr);

    bool res = sortedOrNot(arr);

    cout<<"\nArray Sorted / Not ? ";

    if( res )
        cout<<"YES\n\n";
    else   
        cout<<"NO\n\n";

    

    return 0;
}