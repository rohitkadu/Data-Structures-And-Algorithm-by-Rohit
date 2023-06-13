#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"\n\n***Dynamic Array***\n\n";
    cout<<"Enter Size of Array : ";
    cin>>n;

    int *arr = new(nothrow) int[n];
    if(!arr) {
        cout<<"\t!!!Memory Allocation Failed" ;
    } else {
        cout<<"\n*Memory Allocated Successfully. ";
        printf("Memory Block of \'%d\' created .\n\n",n*sizeof(int));
    }

    cout<<"Enter Array Elements : ";
    for( int i=0 ; i<n ; i++ )
    {
        cin>>arr[i];
    }

    cout<<"\n\nArray : ";
    for( int i=0 ; i<n ; i++ )
    {
        cout<<arr[i]<<" ";
    }
    
    delete[] arr ;
    cout<<"\n\t- Memory Deallocated .\n\n";
    return 0;
}