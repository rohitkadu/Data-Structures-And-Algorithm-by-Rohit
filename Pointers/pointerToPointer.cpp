#include<iostream>
using namespace std;

int main()
{
    int Var = 100 ;
    int *ptr = &Var ;
    int **ptrOfptr = &ptr ;

    printf("\nVar = %d ",Var);
    printf("\n\tAddress of Var = \' %d \' or \' %p \' ",&Var,&Var);

    printf("\n\nptr = %d ",ptr);
    printf("\n\tValue of ptr pointing to ( Var ) : %d",*ptr);
    printf("\n\tAddress of ptr = \' %d \' or \' %p \' ",&ptr,&ptr);

    printf("\n\nptrOfptr = %d ",ptrOfptr);
    printf("\n\tValue of ptrOfptr pointing to ( ptr ) : %d",*ptrOfptr);
    printf("\n\tAddress of ptrofptr = \' %d \' or \' %p \' ",&ptrOfptr,&ptrOfptr);

    return 0;
}