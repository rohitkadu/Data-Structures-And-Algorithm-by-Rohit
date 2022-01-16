// String and String functions in C++ 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    //cin.ignore();

    string firstName , middleName , lastName ;
    cout<<"\nFirst Name : ";
    getline(cin, firstName);
    cout<<"Middle Name : ";
    getline(cin, middleName);
    cout<<"Surname : ";
    getline(cin, lastName);

    string fullName = firstName + middleName + lastName ;
    cout<<"\n\nFull Name : "<<fullName<<" Size = "<<fullName.size();
    cout<<"\nFull Name : "<<firstName<<" "<<middleName<<" "<<lastName<<endl<<endl;

    string str1 = "Hello" , str2 = "World" ;
    //str1.append(str2);
    cout<<str1<<" append "<<str2<<" = ";
    str1.append(str2);
    cout<<str1<<endl<<endl;

    string a="Equal" , b ="Equal" ;
    cout<<a<<" == "<<b<<" ? "<<a.compare(b)<<endl;
    string a1="Equal" , b1 ="UnEqual" ;
    cout<<a1<<" == "<<b1<<" ? "<<a1.compare(b1)<<endl;

    string emptyString = "I am Empty String" ;
    cout<<"\nemptyString = "<<emptyString<<" then -->emptySting.clear() ";
    emptyString.clear();
    if(emptyString.empty()) {
        printf("\n\t- Yes , emptyString is Empty .");
    }

    string stringIndia = "India is my Country . All Indians are my brothers and *sisters .";
    string toFind ;
    cout<<"\n\nString = "<<stringIndia;
    cout<<"\nTo Find : ";
    getline(cin, toFind);
    cout<<"\t\tResults = "<<stringIndia.find(toFind);

    string randomAlphabtes = "BJSZYFALHWPQNIRGKEVTMCXODU";
    cout<<"\n\nRandom Order : "<<randomAlphabtes;
    sort(randomAlphabtes.begin(), randomAlphabtes.end());
    cout<<"\nSorted Order : "<<randomAlphabtes;

    return 0;
}