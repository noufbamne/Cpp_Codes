#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"Enter a Number:";
    cin>>num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    cout<<"Reversed Number :"<<rev<<endl;

    return 0;
}