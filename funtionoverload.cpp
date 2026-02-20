#include<iostream>
using namespace std;
int area(double r)
{
    return 3.14*r*r;
}
int area(int side)
{
    return side*side;
}
int area (int length,int breadth)
{
    return length*breadth;
}
int main()
{
    cout<<"area of circle :"<<endl;
    cout<<"area of square :"<<endl;
    cout<<"area of rectangle :"<<endl;

    return 0;
}
