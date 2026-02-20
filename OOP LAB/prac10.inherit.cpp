// Write a program to find Area of rectangle using Inheritance

#include<iostream>
using namespace std;
class Rectangle
{
 private:
 float length ;
 public:
 float breadth;
void Enter_lb(void)
 {
 cout << "\n Enter the length of the rectangle : ";
 cin >> length ;
 cout << "\n Enter the breadth of the rectangle : ";
 cin >> breadth ;
 }
 float get_l(void)
 { return length ; }
};
class Rectangle1 : public Rectangle
{
 private:
 float area ;
 public:
 void Rec_area(void)
 { area = get_l() * breadth ; }
 // area = length * breadth ; can't be used here
void Display(void)
 {
 cout << "\n Length = " << get_l() ;
 cout << "\n Breadth = " << breadth ;
 cout << "\n Area = " << area ;
 }
};
int main()
{
 Rectangle1 r1 ;
 r1.Enter_lb( );
 r1.Rec_area( );
 r1.Display( );
return 0;
}