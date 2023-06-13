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
    for( int i=0 ; i<input ; i++ )
    {
        int j ;
        // space
        for( j=0 ; j<i ; j++ )
            cout<<" ";
        
        // pattern
        for( j=0 ; j<2*input-(2*i+1) ; j++ )
            cout<<"*";
        
        //space
        for( j=0 ; j<i ; j++)
            cout<<" ";
        
        cout<<"\n";
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
        pattern7(input);
        pattern8(input);
    }


    return 0;
}