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


void printPQ( const priority_queue<int> &meanHeap)
{
    priority_queue<int> temp = meanHeap ;

    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
}


void printPQ( const priority_queue<int, vector<int>, greater<int>> &maxHeap)
{
    priority_queue<int, vector<int>, greater<int>> temp = maxHeap ;

    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
}


void explainPQ() {

    priority_queue<int> meanHeap;

    for( int i=1 ; i<=10 ; i++ )
    {
        meanHeap.push(rand() % 101);
    }

    cout<<"\n\tpriority_queue<int> meanHeap = ";
    printPQ(meanHeap);


    priority_queue<int, vector<int>, greater<int>> maxHeap;

        for( int i=1 ; i<=10 ; i++ )
    {
        maxHeap.push(rand() % 101);
    }

    cout<<"\n\tpriority_queue<int> maxHeap = ";
    printPQ(maxHeap);


    

}


int main()
{
    explainPQ();
    return 0;
}