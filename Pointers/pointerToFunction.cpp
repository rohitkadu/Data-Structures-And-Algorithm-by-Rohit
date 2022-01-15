#include<iostream>
using namespace std;


void swapCallByRef(int *a , int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}


int main()
{
    int a , b ;
    printf("\nEnter Two Numbers : ");
    printf("\n\tA : ");
    cin>>a;
    printf("\tB : ");
    cin>>b;

    cout<<"\nAfter Swapping ( Call by Reference ) : ";
    swapCallByRef(&a,&b);
    printf("\n\tA : %d \n\tB : %d\n\n",a,b);
    return 0;
}