// Multiplication of Matrices 

#include<iostream>
using namespace std;

int main()
{
    int row1 , col1 , row2 , col2 ;
    
    // A Matrix input
    cout<<"\nNumber of rows of A :  ";
    cin>>row1;
    cout<<"Number of columns of A :  ";
    cin>>col1;
    int A[row1][col1];
    cout<<"\nEnter Matrix Elements of A : \n";
    for(int i=0 ; i<row1 ; i++)
    {
        for(int j=0 ; j<col1 ; j++)
        {
            cin>>A[i][j] ;
        }
    }

    // B Matrix input
    cout<<"\nNumber of rows of B :  ";
    cin>>row2;
    cout<<"Number of columns of B :  ";
    cin>>col2;
    int B[row2][col2];
    cout<<"\nEnter Matrix Elements of B : \n";
    for(int i=0 ; i<row2 ; i++)
    {
        for(int j=0 ; j<col2 ; j++)
        {
            cin>>B[i][j] ;
        }
    }

    // A Matrix output
    cout<<"\n\nMatrix A : \n";
    for( int i=0 ; i<row1 ; i++)
    {
        for(int j=0 ; j<col1 ; j++ )
        {
            printf("\t%d ",A[i][j]);
        }
        cout<<endl;
    }

    // B Matrix output
    cout<<"\n\nMatrix B : \n";
    for( int i=0 ; i<row2 ; i++)
    {
        for(int j=0 ; j<col2 ; j++ )
        {
            printf("\t%d ",B[i][j]);
        }
        cout<<endl;
    }


    // A X B = C 
    int C[row1][col2] , sum=0 ;
    for( int i=0 ; i<row1 ; i++ )
    {
        for( int j=0 ; j<col2 ; j++ )
        {
            sum = 0 ;
            for( int k=0 ; k<row1 ; k++ )
            {
                sum += A[i][k] * B[k][j] ;
            }
            C[i][j] = sum ;
        }
    }

    cout<<"\n\nMatrix C : A X B = C\n";
    for( int i=0 ; i<row1 ; i++ )
    {
        for( int j=0 ; j<col2 ; j++ )
        {
            printf("\t%d ",C[i][j]);
        }
        cout<<endl;
    } 


    cout<<"\n\n A X B = C \n";
    for( int i=0 ; i <row1 ; i++ )
    {
        for( int j=0 ; j<col2 ; j++ )
        {
            printf("\t%d ",A[i][j]);
        }
        printf("\t");
        for( int j=0 ; j<col2 ; j++ )
        {
            printf("\t%d ",B[i][j]);
        }
        printf("\t");
        for( int j=0 ; j<col2 ; j++ )
        {
            printf("\t%d ",C[i][j]);
        }
        cout<<endl;
    }

    return 0;
}