// WAP to print area of rectangle using constructer.

#include <iostream>
using namespace std;
class Sample
{
private:
    int l, b;

public:
    int value()
    {
        l = 7;
        b = 7;
    }
    friend float new_value(Sample a);
};
float new_value(Sample a)
{
    return float(a.l * a.b);
}
int main()
{
    Sample X;
    X.value();
    cout << "Area of the rectangle: " << new_value(X) << endl;
    return 0;
}