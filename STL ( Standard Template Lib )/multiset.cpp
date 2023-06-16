/*
multiset :
    1. Stores everything in sorted order.
     but it store multiple occurences as it is
    * Everything happens in logarithmic time complexity
*/

#include<iostream>
#include<set>
using namespace std;


void explainmultiset(){
    multiset<int> s;

    for( int i=1 ; i<=20 ; i++ )
    {
        s.emplace(rand()%9+1);
    }

    cout<<"multiset = ";
    for( auto it: s)
        cout<<it<<" ";

    s.erase(8); // erase all occurences of 8
    cout<<"\nnew multiset = ";
    for( auto it: s)
        cout<<it<<" ";

    s.erase(s.find(9)); //removes only one 9 and not all
    cout<<"\nnew multiset = ";
    for( auto it: s)
        cout<<it<<" ";


}


int main()
{
    explainmultiset();
    return 0;
}