#include<iostream>
using namespace std;

void form(string name, string address, int aadhar, float percentage, string DOB)
{
    cout<<"Student name: "<<name<<endl;    
    cout<<"Student address: "<<address<<endl;
    cout<<"Student aadhar: "<<aadhar<<endl;
    cout<<"Student percentage: "<<percentage<<endl;
    cout<<"Student DOB: "<<DOB<<endl;    
}

int main()
{
    string n;
    cout<<"Enter the name of the student:"<<endl;
    cin>>n;

    string add;
    cout<<"Enter the address of the student:"<<endl;
    cin>>add;

    int adhr;
    cout<<"Enter aadhar card number of the student:"<<endl;
    cin>>adhr;

    float per;
    cout<<"Enter the percentage of the student:"<<endl;
    cin>>per;

    string DOB;
    cout<<"Enter the birthdate of the student (MM/DD/YYYY):"<<endl;
    cin>>DOB;

    form(n,add,adhr,per,DOB);

    return 0;
}