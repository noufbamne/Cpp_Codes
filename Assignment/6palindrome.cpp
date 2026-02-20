#include<iostream>
using namespace std;

int main()
{   
    int n,num,digit,rev=0;
    cout<<"Enter a number to check if it is palidrome or not.";
    cin>>num;

    n=num;
    while(num!=0)
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    if (n==rev)
    {
        cout<<"Palindrome number.";
    }
    else
    {
        cout<<"Not a palindrome number.";
    }
    return 0;
}