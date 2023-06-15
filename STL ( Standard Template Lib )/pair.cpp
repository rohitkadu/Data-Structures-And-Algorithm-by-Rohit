#include<iostream>
using namespace std;

void explainPair() {

    //Basic Pair
    pair <int, int> pair1 = {26,11};
    cout<<"Pair 1: "<<pair1.first<<", "<<pair1.second<<endl;

    //Nested Pair
    pair <int, pair<int,int>> pair2 = {1, {2,3}};
    cout<<"Pair 2: "<<"int("<<pair2.first<<"), pair("<<pair2.second.first<<", "<<pair2.second.second<<")\n";

    //Array Pair
    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<"Pair 3: "<<"index(2)-values = "<<arr[2].first<<", "<<arr[2].second;
}

int main()
{
    explainPair();
    return 0;
}