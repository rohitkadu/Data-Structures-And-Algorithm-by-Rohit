#include<iostream>
#include<deque>
using namespace std;


void explaindeque()
{
    deque<int> deque1;
    
    deque1.push_back(2);
    deque1.emplace_back(3);
    deque1.emplace_back(4);
    deque1.emplace_back(5);

    deque1.push_front(1);
    deque1.emplace_front(0);

    deque1.pop_front();
    deque1.pop_back();

    cout<<"\ndeque1 = ";
    for( auto itdeque1 : deque1 )
    {
        cout<<itdeque1<<" ";
    }

    cout<<"\ndeque.front() = "<<deque1.front();
    cout<<"\ndeque.back() = "<<deque1.back();

    // rest all functions are similar to vectors & lists!

}


int main()
{
    explaindeque();
    return 0;
}