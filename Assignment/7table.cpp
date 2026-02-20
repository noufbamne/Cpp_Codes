#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of which you want the table:"<<endl;
    cin>>num;

    int range;
    cout<<"Enter the range:";
    cin>>range;

    int i=1;

    do
    {
        cout<<num<<" * "<<i<<" = "<<(num*i)<<i++;
    }
    while (i<=range);
    
    return 0;
}