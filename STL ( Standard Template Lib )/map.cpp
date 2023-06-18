/*
    Map : ( keys usnique in sorted order )
        key(unique) - value pairs

    Multimap : ( kay aren't unique & can contain multiple values) rest is similar

    Unordered Map : just unsorted

    unordered map works in O(1)
    mpa workd in O(log n) and in worst case O(n)
*/

#include<iostream>
#include<map>
using namespace std;

void printMap(const map<int,int> &mp) {
    // map<int, int> temp = mp;

    for( auto it=mp.begin() ; it!=mp.end() ; ++it)
    {
        cout<<it->first<<" - "<<it->second<<"\n";
    }
}

void explainMap() {

    map<int, int> mp1 ;

    // mp1[1] = 23;
    // mp1.insert({2,56});
    // mp1.emplace(3,76);

    int i = 10, count = 0 ;
    while( count<=i )
    {
        mp1.emplace(rand()%100+1, rand()%1000+1);
        count++;
    }

    cout<<"map<int,int> mp1 = \n";
    printMap(mp1);

}


int main()
{
    explainMap();
    return 0;
}