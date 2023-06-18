#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {

    if( p1.second < p2.second ) return true;
    if( p1.second > p2.second ) return false;

    if( p1.first > p2.first ) return true;
    else return false;

}

void explainSortExtra() {
    int arr[20];
    vector<int> v;
    int i = 0;

    while( i<20 )
    {
        int element = rand()%100+1;
        arr[i] = element;
        v.emplace_back(element);
        i++;
    }

    cout<<"\nOriginal arr[20] = ";
    for( auto itarr : arr)
    {
        cout<<itarr<<" ";
    }
    sort(arr, arr+i);
    cout<<" \n\tSorted arr[20] = ";
    for( auto itarr : arr)
        cout<<itarr<<" ";

    sort(arr, arr+i, greater<int>());
    cout<<" \n\tReverse Sorted arr[20] = ";
    for( auto itarr : arr)
        cout<<itarr<<" ";


    cout<<"\n\nOriginal Vector v = ";
    for( auto itv : v)
        cout<<itv<<" ";
    sort(v.begin(), v.end());
    cout<<"\n\tSorted Vector v = ";
    for( auto itv : v)
        cout<<itv<<" ";
    sort(v.begin(), v.end(), greater<int>());
    cout<<"\n\tReverse Sorted Vector v = ";
    for( auto itv : v)
        cout<<itv<<" ";

    pair<int, int> a[] = {{1,2}, {1,6}, {2,5}, {3,8}, {4,6}, {2,6}, {3,7}, {3,5}, {9,8}, {9,9}};
    cout<<"\n\nOriginal Pair<int, int> a[] = ";
    for ( auto ita : a)
        printf("{%d, %d}",ita.first, ita.second);

    int n = sizeof(a)/sizeof(a[0]);
    sort(a, a+n, comp);
    cout<<"\n\tSorted Customized Pair<int, int> a[] = ";
    for ( auto ita : a)
        printf("{%d, %d}",ita.first, ita.second);  


    int maxarr = *max_element(arr, arr+i);  
    int maxv = *max_element(v.begin(), v.end());
        cout<<"\n\nMax in arr[20] = "<<maxarr; 
        cout<<"\nMax in v = "<<maxv; 

}

int main()
{
    explainSortExtra();
    return 0;
}