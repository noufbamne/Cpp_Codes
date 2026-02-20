#include<iostream>
using namespace std;
void swap(int a , int b);
void swapPtr(int *a, int *b);
void swapRefvar(int &a, int &b);

int main()
{
    int num1 = 4, num2 = 5;

    cout<<"the number before swapping are:"<<num1<<num2<<endl;

    swap (num1, num2);
    swapPtr(&num1, &num2);
    swapRefvar(num1,num2) = 6;

    cout<<"the number after swaping:"<<num1<<" "<<num2<<" "<<endl;

    return 0;

}


