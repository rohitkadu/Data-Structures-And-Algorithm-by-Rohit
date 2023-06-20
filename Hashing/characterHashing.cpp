#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"\nEnter Input : ";
    getline(cin, str);

    int charHash[256] = {0}; // as there are 256 ASCII chars

    for( int i=0 ; i<str.size() ; i++ )
    {
        charHash[str[i]] += 1;
    }

    string queue;
    cout<<"\n\tEnter Queue: ";
    getline(cin, queue);

    cout<<"\tOccurences : ";
    for( int j=0 ; j<queue.size() ; j++ )
    {
        cout<<charHash[queue[j]];
    }
    return 0;
}