/*
Set :
    1. Stores everything in sorted order.
    2. Stores only unique values
    * Everything happens in logarithmic time complexity
*/

#include<iostream>
#include<set>
using namespace std;


void explainSet(){
    set<int> s;

    for( int i=1 ; i<=10 ; i++ )
    {
        s.insert(rand()%9);
    }

    cout<<"Set = ";
    for( auto it: s)
    {
        cout<<it<<" ";
    }

    auto it3 = s.find(3);
    auto it6 = s.find(5);
    auto itnone = s.find(12); //it will return s.end() value if not present
    // cout<<"\n"<<*itnone;
    s.erase(it3, it6);

    cout<<"\nSet = ";
    for( auto it: s)
    {
        cout<<it<<" ";
    }

    


}


int main()
{
    explainSet();
    return 0;
}