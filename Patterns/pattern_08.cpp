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
        pattern(input);
    }


    return 0;
}