#include<iostream>
using namespace std;
int main()

{
    int a,b;
    cout<<"enter the first number:"<< endl;
    cin>>a;
    cout<<"enter the second number :"<< endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "changed values are:"<<a<<b<<endl;

    return 0;
}