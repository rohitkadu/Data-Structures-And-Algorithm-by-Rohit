#include<iostream>
#include<vector>
using namespace std;

void explainVector() {

    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2); // faster than push_back()
    v1.emplace_back(3);
    v1.emplace_back(4);
    v1.emplace_back(5);


    vector<pair<int,int>> vec_pair;
    vec_pair.push_back({1,2}); //{required}
    vec_pair.emplace_back(3,4); //{} not required

    vector<int> v2(5,100); //container of 5 instances of 100
    vector<int> v3(5); //contained of 5 instances of garbage value

    vector<int> v4(v2);

    cout<<v1[1]<<endl; //normal accesing like array

    //start
    vector<int>::iterator it1 = v1.begin();
    cout<<*(it1);
    it1++;
    cout<<*(it1)<<endl;

    //end
    vector<int>::iterator it1end = v1.end(); //points to memory address + 1 of last element
    // vector<int>::iterator it1end = v1.rend(); //points to memory address - 1 of first element
    // vector<int>::iterator it1end = v1.rbegin(); //points to memory address + 1 of first element and it1end++ will iterate in reverse order


    //printing vector
    cout<<"\nvector<int> v1 = ";
    for( vector<int>::iterator itv1 = v1.begin(); itv1 != v1.end(); itv1++)
    {
        cout<<*(itv1)<<", ";
    }

    //simple method for above
    cout<<"\nvector<int> v2 = ";
    for( auto itv2 = v2.begin() ; itv2 != v2.end() ; itv2++ )
    {
        cout<<*(itv2)<<", ";
    }

    //more simple method
    cout<<"\nvector<int> v3 = ";
    for( auto itv3 : v3 )
    {
        cout<<itv3<<", ";
    }

    v3.erase(v3.begin());// 0 0 0 0 0 -> 0 0 0 0
    v3.erase(v3.begin()+1, v3.begin()+3 ); // 0' 0 0 0' -> 0' 0'


    //Insert Function
    vector<int> v5(6,60);
    v5.insert(v5.begin(), 50);
    v5.insert(v5.begin()+2, 70);
    v5.insert(v5.begin()+3, 3, 90);

    vector<int> v6(2,80);
    v5.insert(v5.begin()+3, v6.begin(), v6.end());
    cout<<"\nvector<int> v5 = ";
    for( auto itv5 : v5 )
    {
        cout<<itv5<<", ";
    }
    v5.pop_back();
    
    cout<<"\n\tSize of v5 = "<<v5.size();

    v3.clear();
    if( v3.empty() )
        cout<<"\nvector<int> v3 is empty";
    else{
            cout<<"\nvector<int> v3 = ";
    for( auto itv3 : v3 )
    {
        cout<<itv3<<", ";
    }
    }

}

int main()
{
    explainVector();
    return 0;
}