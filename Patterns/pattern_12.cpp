#include<iostream>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

void pattern7(int input) {
    for( int i=0 ; i<input ; i++ )
    {
        int j ;
        // space
        for( j=0 ; j<input-i-1 ; j++ )
            cout<<" ";
        
        for( j=0 ; j<i*2+1 ; j++ )
            cout<<"*";
        
        for( j=0 ; j<input-i+1 ; j++)
            cout<<" ";
        
        cout<<"\n";
    }
}

void pattern8(int input) {
    int j;
    int decrement = 2*(input-1);
    for(int i=1 ; i<=input ; i++ )
    {
        // number
        for( j=1 ; j<=i ; j++)
        {
            cout<<j;
        }

        // space
        for( j=1 ; j<=decrement ; j++ )
        {
            cout<<" ";
        }


        // number
        for( j=i ; j>=1 ; j-- )
        {
            cout<<j;
        }
        cout<<"\n";
        decrement -= 2;
    }


}

int main()
{
    imp();

    int n;
    cin>>n;
    int input;


    for(int i=1 ; i<=n ; i++)
    {
        cin>>input;
        pattern8(input);
    }


    return 0;
}