#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"\nEnter String : ";
    getline(cin, str);

    int charHash[26] = {0};

    for( int i=0 ; i<str.size() ; i++ )
    {
        charHash[str[i]-'a'] += 1;
    }

    string queue;
    cout<<"\n\tEnter queue : ";
    getline(cin, queue);
    cout<<"\tOccurences : ";
    for( int j=0 ; j<queue.size() ; j++ )
    {
        cout<<charHash[queue[j]-'a']<<" ";
    }
    return 0;
}