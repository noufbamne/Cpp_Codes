#include <iostream>
using namespace std;

union money
{
    int annual_income;
    float salary;
    char grade;
};
int main()
{
    union money m1;
    m1.annual_income=122000;
    m1.salary=20000;
    m1.grade='A';
    
    cout<<"annual_income:"<<m1.annual_income<<endl;
    cout<<"salary:"<<m1.salary<<endl;
    cout<<"grade:"<<m1.grade<<endl;

    return 0;
}
