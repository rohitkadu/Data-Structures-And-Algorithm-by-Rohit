#include<iostream>
#include<queue>
using namespace std;


void printQueue(const queue<int> q)
{
    queue<int> temp = q ;

    while( !temp.empty() )
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
}


void explainQueue() {
    queue<int> q1 ;

    for( int i=1 ; i<=10 ; i++ )
    {
        q1.push(i);
    }

    cout<<"queue<int> q1 = ";
    printQueue(q1);
    



}

int main()
{
    explainQueue();
    return 0;
}