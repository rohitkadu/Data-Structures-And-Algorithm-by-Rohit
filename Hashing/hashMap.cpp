#include<iostream>
#include<cmath>
#include<map>
using namespace std;

void printMap(const map<int,int> &mp) {
    // map<int, int> temp = mp;

    for( auto it=mp.begin() ; it!=mp.end() ; ++it)
    {
        cout<<it->first<<" - "<<it->second<<"\n";
    }
}

int main()
{
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;

    int arr[1000];
    map<int, int> mp;

    for( int i=0 ; i<n ; i++ )
    {
        arr[i] = rand()%5+1;

        //pre-compute
        mp[arr[i]]++;
    }

    cout<<"\nArray = ";
    for( int j=0 ; j<n ; j++ )
    {
        cout<<arr[j]<<" ";
    }

    cout<<"\n\nOccurences of : \n";
    printMap(mp);

    return 0;
}