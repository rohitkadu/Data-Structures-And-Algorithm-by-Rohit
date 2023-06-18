#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    
    for( int i=1 ; i<=10 ; i++)
    {
        printf("\npopcount / Set bits of %d = %d", i, __builtin_popcount(i));
    }

    long long num = 12837438938432;
    printf("\npopcount / Set bits of %lld = %d", num, __builtin_popcountll(num));


    cout<<"\n\nEnter string : ";
    string str;
    getline(cin, str);

    cout<<"\n\tAll permutations of "<<str<<" = ";

    //note : this only works fine with sorted string so make sure to sort them
    sort(str.begin() , str.end());
    do{
        cout<<str<<", ";
    }while( next_permutation(str.begin(), str.end()));




    return 0;
}