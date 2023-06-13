#include<iostream>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

void pattern(int input) {
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

int main()
{
    imp();

    int n;
    cin>>n;
    int input;


    for(int i=1 ; i<=n ; i++)
    {
        cin>>input;
        pattern(input);
    }


    return 0;
}