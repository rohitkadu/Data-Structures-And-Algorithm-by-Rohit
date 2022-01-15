// Pinter to Array

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptrToArray = arr ;

    printf("\nOriginal Array : ");
    for( int i=0; i<5 ; i++ )
    {
        printf("%d ",arr[i]);
    }

    cout<<"\n\nFirst Value of Array or at Index 0 : ( using poniner ) - "<<*ptrToArray<<endl;
 
    cout<<"\n\tPrinting Array using Pointer \'ptrToArray\' : ";
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d ",*ptrToArray) ;
        ptrToArray++;
    }

    cout<<"\n\n\tPrinting Array using Array Variable's Pointer \'*arr[i+1]\' : ";
    for(int i=0 ; i<5 ; i++ )
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl<<endl;
    return 0;
}