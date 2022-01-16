// Spiral Traversing in 2D Array

#include<iostream>
using namespace std;

int main()
{
    int n , m ;
    cout<<"\nNumber of rows : ";
    cin>>n;
    cout<<"Number of columns : ";
    cin>>m;

    int arr[n][m];

    cout<<"\nEnter Matrix Elements :\n";
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j] ;
        }
    }

    cout<<"\n\nYour Matrix : \n";
    for( int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++ )
        {
            printf("\t%d",arr[i][j]);
        }
        cout<<endl;
    }


    // Spiral 2D Array Traversal Logic 
    int row_start = 0 , row_end = n-1 ;
    int col_start = 0 , col_end = m-1 ;

    printf("\n\nSpiral Traversed Elements : ");

    while(row_start <= row_end && col_start <= col_end )
    {
        // for row_start
        for(int col = col_start ; col <= col_end ; col++ )
        {
            printf("%d ",arr[row_start][col]);
        }
        row_start++ ;

        // for col_end
        for(int row = row_start ; row <= row_end ; row++ )
        {
            printf("%d ",arr[row][col_end]);
        }
        col_end--;

        // for row_end
        for(int col = col_end ; col >= col_start ; col-- )
        {
            printf("%d ",arr[row_end][col]);
        }
        row_end--;

        // for col_start
        for(int row = row_end ; row >= row_start ; row-- )
        {
            printf("%d ",arr[row][col_start]);
        }
        col_start++;
    }

    return 0;
}