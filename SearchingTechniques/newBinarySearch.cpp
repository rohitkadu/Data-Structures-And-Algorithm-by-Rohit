#include<iostream>
#include<vector>
using namespace std;


void printArray(vector<int> arr, int n)
{

    for( auto itv : arr )
    {
        cout<<itv<<" ";
    }

}


int binarySearch(vector<int> arr, int n, int key)
{
    int start = 0 ;
    int end = n-1 ;
    int mid;

    while( start <= end )
    {
        mid = start + (end-start)/2 ;
        
        if( arr[mid] == key )
        {
            return mid;
        }

        else if( key > arr[mid] )
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}


int main()
{
    int n;

    cout<<"\nEnter Size of Array : ";
    cin>>n;

    vector<int> arr;
    //populate arr
    cout<<"\nEnter "<<n<<" inputs : ";
    for( int i=0 ; i<n ; i++ )
    {
        int input;
        cin>>input;
        arr.push_back(input);
    }

    cout<<"\nOG Array : ";
    printArray(arr, n);

    cout<<"\nEnter element to be searched : ";
    int key;
    cin>>key;

    int indexofKey = binarySearch(arr, n, key);
    cout<<"\tIndex of "<<key<<" is "<<indexofKey;




    return 0;
}