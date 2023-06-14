#include<iostream>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

void pattern(int input) {
    for( int i=1 ; i<=input ; i++ )
    {
        for( char ch='A' ; ch<'A'+(input-i+1) ; ch++ )
        {
            cout<<ch<<" ";
        }
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