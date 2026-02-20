#include<iostream>
using namespace std;
int main()
{
    cout<<"Let's learn about pointers"<<endl;
    int a = 73;
    int*ptra = &a;

    cout<<"the address of the pointer to a is:"<<&ptra<<endl;
    cout<<"the value of a is:"<<*ptra<<endl;

    return 0;
}