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


int isSortedArray(int arr[] , int size)
{
    if( size==0 || size==1 )
    {
        cout<<"\n\tBase Condition : returned 1 ";
        return 1 ;
    }

    if( arr[size-1] < arr[size-2] )
    {
        printf("\n\t%d < %d : returned 0 ",arr[size-1], arr[size-2]);
        return 0 ;
    }

    return isSortedArray(arr, size-1) ;
}


bool isSortedArrayMethod2( int arr[] , int size )
{
    if( size==0 || size==1 )
    {
        cout<<"\n\tBase Condition : returned TRUE ( 1 ) ";
        return true ;
    }

    return ( arr[size-1]>=arr[size-2] && isSortedArrayMethod2(arr, size-1) );
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
    int arr1[5] = {1,2,3,4,5} ;
    int arr2[5] = {1,2,4,5,3} ;
    int arr3[5] = {2,4,6,8,10} ;
    int arr4[5] = {2,1,6,3,10} ;
    int arr5[5] = {10,20,30,40,50} ;
    int arr6[5] = {50,40,30,20,10} ;

    cout<<"\nArray : ";
    printArray(arr1,5);
    cout<<"\nArray : ";
    printArray(arr2,5);
    cout<<endl;
    if(recSortedArrayOrNot(arr1,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr1,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr1,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }
    if(recSortedArrayOrNot(arr2,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr2,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr2,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }


    cout<<"\nArray : ";
    printArray(arr3,5);
    cout<<"\nArray : ";
    printArray(arr4,5);
    cout<<endl;
    if(isSortedArray(arr3,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr3,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr3,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }
    if(isSortedArray(arr4,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr4,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr4,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }

    cout<<"\nArray : ";
    printArray(arr5,5);
    cout<<"\nArray : ";
    printArray(arr6,5);
    cout<<endl;
    if(isSortedArrayMethod2(arr5,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr5,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr5,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }
    if(isSortedArrayMethod2(arr6,5))
    {
        cout<<"\tArray : ( ";
        printArray(arr6,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" Yes \" \n\n" ;
    }  else {
        cout<<"\tArray : ( ";
        printArray(arr6,5);
        cout<<" ) Sorted ? -> ";
        cout<<"\" No \" \n\n";
    }


    return 0;
}

/*

OUTPUT :

Array Sorted or Not using Recursion


Array : 1 2 3 4 5
Array : 1 2 4 5 3 

        Base Condition : 1
        4 < 5 : 1 && 1 = 1
        3 < 4 : 1 && 1 = 1
        2 < 3 : 1 && 1 = 1
        1 < 2 : 1 && 1 = 1      Array : ( 1 2 3 4 5  ) Sorted ? -> " Yes "


        Base Condition : 1
        5 < 3 : 0 && 1 = 0
        4 < 5 : 1 && 0 = 0
        2 < 4 : 1 && 0 = 0
        1 < 2 : 1 && 0 = 0      Array : ( 1 2 4 5 3  ) Sorted ? -> " No "


Array : 2 4 6 8 10
Array : 2 1 6 3 10

        Base Condition : returned 1     Array : ( 2 4 6 8 10  ) Sorted ? -> " Yes " 


        3 < 6 : returned 0      Array : ( 2 1 6 3 10  ) Sorted ? -> " No " 


Array : 10 20 30 40 50
Array : 50 40 30 20 10

        Base Condition : returned TRUE ( 1 )  


*/