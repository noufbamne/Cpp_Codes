// WAP to print and save roll no of student.

#include <iostream>
using namespace std;
class Student
{
    public:
    int rno;
    void student()
    {
        cout<<"Enter the roll no.: "<<endl;
        cin>>rno;
        cout<<"Your roll no is "<<rno;
    }
};


int main(){
    Student obj;//default constructor called automatically when obj is created
    // obj.d=23;
    // obj.e=34;
    obj.student();
    //obj.get_func();
    
return 0;
}