/*
Priority Queue:
    //It is similar to queue but has max num at first place and rest in descending order
    //It has tree data structure underneath
    //push - O (log n)
    //top - O (1)
    //pop - O (log n)
*/


#include<iostream>
#include<queue>
using namespace std;


void printPQ( const priority_queue<int> &pq)
{
    priority_queue<int> temp = pq ;

    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
}


void explainPQ() {

    priority_queue<int> pq;

    for( int i=1 ; i<=10 ; i++ )
    {
        pq.push(rand() % 101);
    }

    cout<<"priority_queue<int> pq = ";
    printPQ(pq);
    

}


int main()
{
    explainPQ();
    return 0;
}