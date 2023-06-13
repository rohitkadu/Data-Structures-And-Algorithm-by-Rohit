#include<iostream>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

void pattern(int input) {
    for( int i=1 ; i <=2*input-1 ; i++ )
    {
        int stars = i ;

        if(i>input) 
            stars = 2*input-i;

        for(int j=1 ; j<=stars ; j++)
        {
            cout<<"*";
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