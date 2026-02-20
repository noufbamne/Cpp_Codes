#include<iostream>
using namespace std;

// call by value
void swap (int a, int b)
{
    int temp = a;
           a = b;
           b = temp;
}
// call by reference using pointers
void swapptr (int *a, int *b)
{
    int temp = *a;
          *a = *b;
          *b = temp;
}
// call by reference using reference variable
int &swapRefvar (int &a, int &b)
{
   int temp = a;
    int a = b;
    int b = temp; 
    return a;
}

