// Syntax:
// class class_name
// {
//  friend data_type function_name(argument/s); // syntax of friend function.
// };
// Write a program to find Area of circle using friend function


#include<iostream>
using namespace std;
class AreaOfCircle {
 int radius;
public:
 void get() {
 cout << "Enter the radius of Circle : ";
 cin >> radius;
 }
 friend float calculate(AreaOfCircle a);
};
float calculate(AreaOfCircle a) {
 return 3.14 * a.radius * a.radius;
}
int main() {
 AreaOfCircle obj;
 obj.get();

 cout<<"Area of Circle : "<<calculate(obj)<<endl;
}