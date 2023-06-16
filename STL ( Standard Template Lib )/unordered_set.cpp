/*
Similar to set but just it is unordered
// all operations happends in O(1)
*/

#include<iostream>
#include<unordered_set>
using namespace std;

void explainUnorderdSet(){

    unordered_set<int> us;

    for( int i=1 ; i<=15 ; i++)
    {
        us.emplace(rand()%9+1);
    }

    cout<<"Unordered Set is : ";
    for( auto itus : us )
    {
        cout<<itus<<" ";
    }

    // rest all are similar

}

int main()
{
    
    explainUnorderdSet();   
    return 0;
}