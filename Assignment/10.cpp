#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    int Number()
    {
        a=0;
    }
   
    int Number(int num)
    {
        a=num;
    }
    
    int Number(number & obj)
    {
        cout<<"copy construction called!"<<endl;
        a=obj.a;
    }

    void display()
    {
        cout<<"The number for this object :"<<a<<endl;
    }
};

int main()
{
    number x,y,z;
    x.display();
    y.display();
    z.display();
}


