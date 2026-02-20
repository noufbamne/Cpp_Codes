#include<iostream>
using namespace std;
float moneyrecieved(int currentmoney,float factor)
{
    return currentmoney*factor;
}
int main()
{
    float money=100000;
    cout<<"if you have "<<money<<"rs in your bank account, you will recieve "<<moneyrecieved<<"rs after one year"<<endl;
    cout<<"For VIP:If you have "<<money<<"rs in your bank account, you will recieve "<<moneyrecieved<<"rs after one year"<<endl;

}