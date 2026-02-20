#include<iostream>
using namespace std;

const int len=88;

class doctor
{
    private:
    char name;
    char degree;

    public:
    void getdata()
    {
        cout<<"Enter doctor's name:"<<endl;
        cin>>name;
        cout<<"Enter Doctor's degree"<<endl;
        cin>>degree;
    }

    void setdata()
    {
        cout<<"Doctor's name:"<<endl;
        cout<<"Doctor's degree:"<<endl;
    }

};

class patient
{
    private:
    char name;
    int bedno;
    

    public:
    void getdata()
    {
        cout<<"Enter Patient's name:"<<endl;
        cin>>name;
        cout<<"Enter Bed no:"<<endl;
        cin>>bedno;
    }

    void setdata()
    {
        cout<<"patient's name:"<<endl;
        cout<<"Bed no:"<<endl;
    }
};

class department
{
    private:
    char wardname;
    

    public:
    void getdata()
    {

    cout<<"Enter the Ward name:"<<endl;
    cin>>wardname;
    }

    void setdata()
    {
        cout<<"Ward name:"<<endl;
    }
};

class amount
{
    private:
    int fees;
    patient pat;
    doctor doc;
    department dept;

    public:
    void A()
    {
        pat.getdata();
        doc.getdata();
        dept.getdata();
        cout<<"Enter fees of patient:"<<endl;
        cin>>fees;
    }

    void B()
    {
        pat.setdata();
        doc.setdata();
        dept.setdata();
        cout<<"Total fees:"<<endl;
    }
};

int main()
{
    amount obj;
    cout<<endl<<"Enter Data"<<endl;
    obj.A();
    cout<<endl<<"Inserted Data"<<endl;
    obj.B();
    return 0;
}