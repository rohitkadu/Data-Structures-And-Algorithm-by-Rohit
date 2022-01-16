// Transpose of a Matrix

#include<iostream>
using namespace std;

int main()
{
    int row , col ;
    cout<<"\nNumber of rows : ";
    cin>>row;
    cout<<"Number of columns : ";
    cin>>col;

    int arr[row][col];

    cout<<"\nEnter Matrix Elements :\n";
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin>>arr[i][j] ;
        }
    }

    cout<<"\n\nYour Matrix : \n";
    for( int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++ )
        {
            printf("\t%d",arr[i][j]);
        }
        cout<<endl;
    }


    for( int i=0 ; i<row ; i++ )
    {
        for( int j=i ; j<col ; j++ )
        {
            // Swap
            int temp = arr[i][j] ;
            arr[i][j] = arr[j][i] ;
            arr[j][i] = temp ;
        }
    }

    cout<<"\n\nTranspose of Matrix : \n";
    for( int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++ )
        {
            printf("\t%d",arr[i][j]);
        }
        cout<<endl;
    }

    return 0;
}