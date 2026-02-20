// The Fibonacci sequence is a series where the next term is the sum of previous two terms.

#include<iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 =1, next = 0, n;

    cout<<"Enter any positive number: ";
    cin>>n;

    cout<<"Fibonacci";
    next = t1+t2;

    while (next<=n)
    {
        cout<<"next"<<" ";
        t1 = t2;
        t2 = next;
        next = t1+t2;

    }
    
    return 0;
}