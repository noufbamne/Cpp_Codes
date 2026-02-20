/*syntax:-
initialization
while(statement)
{
    satement(c++ code)
    update(incree/decre)
}

// write a program to print 100 to 1 numbers*/

#include<iostream>
using namespace std;
int main()
{
    int i=100;
    while ( i >= 1 )
    {
        cout<<" "<<i<<endl;
        i--;
    }
    
    return 0;
}
