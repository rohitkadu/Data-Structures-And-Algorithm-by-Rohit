#include<iostream>
using namespace std;

bool recSortedArrayOrNot(int arr[] , int size )
{
    if( size==0 || size==1 )
    {
        cout<<"\n\tBase Condition : 1 ";
        return true ;
    }

    bool isSorted = recSortedArrayOrNot( arr+1 , size-1) ;
    printf("\n\t%d < %d : %d && %d = %d",arr[0],arr[1],arr[0]<arr[1],isSorted,((arr[0]<arr[1])&&isSorted) );
    return ( arr[0] < arr[1] && isSorted );

}


void printArray(int arr[] , int size)
{
    for( int i=0 ; i<size ; i++ )
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    cout<<"\n\nArray Sorted or Not using Recursion \n\n";
    int arr[5] = {2,4,6,8,10};

    cout<<"\nArray : ";
    printArray(arr,5);
    cout<<endl;

    if(recSortedArrayOrNot(arr,5))
    {
        cout<<"\n\nArray : ( ";
        printArray(arr,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" " ;
    }  else {
        cout<<"\n\nArray : ( ";
        printArray(arr,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \"";
    }



    return 0;
}