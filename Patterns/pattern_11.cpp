#include<iostream>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

void pattern(int input) {
    int value;
    for(int i=1 ; i<= input ; i++ )
    {
        if(i%2 != 0)
            value=1;
        else
            value=0;

        for( int j=1 ; j<=i ; j++ )
        {
            cout<<value;
            value = 1 - value;
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