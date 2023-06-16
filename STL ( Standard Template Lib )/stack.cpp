#include<iostream>
#include<stack>
using namespace std;


void printStack(const stack<int> &st) {
    
    stack<int> temp = st;

    while( !temp.empty() )
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;

}

void explainStack() {

    stack<int> st1;

    int i = 1;
    while( i<=10)
    {
        st1.push(i++);
    }

    cout<<"\nstack<int> st1 (OF stack) = ";
    printStack(st1);

    cout<<"Size of Stack = "<<st1.size();

    
    
}


int main()
{
    explainStack();
    return 0;
}