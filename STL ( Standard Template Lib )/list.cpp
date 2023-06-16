#include<iostream>
#include<list>
using namespace std;


void explainList()
{
    list<int> list1;
    
    list1.push_back(2);
    list1.emplace_back(3);
    list1.emplace_back(4);
    list1.emplace_back(5);

    list1.push_front(1);
    list1.emplace_front(0);

    cout<<"\nList1 = ";
    for( auto itList1 : list1 )
    {
        cout<<itList1<<" ";
    }

    // rest all functions are similar to vectors!

}


int main()
{
    explainList();
    return 0;
}