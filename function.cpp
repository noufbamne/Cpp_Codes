#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int num1, num2;
    cout<<"enter the first number:"<<num1<<endl;
    cin>>num1;
    cout<<"enter the second number:"<<num2<<endl;
    cin>>num2;

    cout<<"the sum is:"<<sum(num1,num2)<<endl;
    return 0;
}