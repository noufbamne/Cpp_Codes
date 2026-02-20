#include<iostream>
using namespace std;

int sum()
{
    int flag=1;
    for (int n=1; n>= 0; n++)
    {
        flag += n;
    }
    
    return flag;
}

int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;

    cout<<"sum "<<"of "<<num<<" = "<<sum();

    return 0;

}