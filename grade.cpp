#include<iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout<<"enter your marks:";
    cin>>marks;

    if (marks >= 80)
    {
        grade = 'A';
    }
    else if (marks >= 60 && marks < 80)
    {
        grade = 'B';
    }
    else if (marks >= 50 && marks < 60)
    {
        grade = 'C';
    }
    else if (marks >= 45 && marks < 50)
    {
        grade = 'D';
    }
    else if (marks >= 25 && marks < 45)
    {
        grade = 'E';
    }
    else 
    {
        grade = 'F';
    }
    
    cout<<"your grade is:"<<grade<<endl;
    
    return 0;
}