/*logic of the program

1. if in the program
ASCII value >= 97 &
ASCII value <= 122 ,
then the character is small 

2. if in the program
ASCII value >= 65 &
ASCII value <= 90 ,
then the character is capital

3. if other than these conditions then print "invalid character" */
#include<iostream>
using namespace std;

int main()
{
    int ascii_value;

    cout<<"enter an ASCII value(0-127):"<<endl;
    cin>>ascii_value;

    if (ascii_value >= 65 && ascii_value <= 90)
    {
       cout<<"the character is an uppercase letter"<<char(ascii_value)<<endl;
    }
    else if (ascii_value >= 97 && ascii_value <= 122)
    {
        cout<<"the character is a lowercase letter"<<char(ascii_value)<<endl;
    }
    else
    {
        cout<<"The ASCII value does not represent a letter"<<endl;
    }
    
     return 0;
}