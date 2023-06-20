#include<iostream>
#include<string>
using namespace std;

void printNameRec(string name, int n) {

    if( n== 0 ) return ;
    else
    {
        cout<<n<<". "<<name<<"\n";
        printNameRec(name, n-1);
    }

}

int main()
{
    int n ;
    string str;
    cout<<"\nEnter number: ";
    cin>>n;
    cin.ignore();
    cout<<"\nEnter name: ";
    getline(cin, str);

    printNameRec(str, n);
    return 0;
}