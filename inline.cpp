#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    // int c= a+b
    // cout<<"the sum is :"<<c<<endl;
    return a+b;
}
int main()
{
    int a , b;

    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<endl<<"the sum of a and b is:"<<add(a,b);

    return 0;
}
