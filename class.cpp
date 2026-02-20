#include<iostream>
using namespace std;

// class myclass{
    // public:
    // int mynum;
    // string mystring;
// };

// int main(){
    // myclass myobj;

    // myobj.mynum=15;
    // myobj.mystring="Nouf";
    // cout<<myobj.mynum<<endl;
    // cout<<myobj.mystring;

    // return 0;
// }

class mobile{
    public:
    string colour;
    string model;
    string op;
};

int main(){
    mobile mymob;
    mymob.colour="grey";
    mymob.model="samsung";
    mymob.op="Android";

    mobile sadimob;
    sadimob.colour="black";
    sadimob.model="Iphone";
    sadimob.op="IOS";

    mobile mahimob;
    mahimob.colour="ferozi";
    mahimob.model="Redminote";
    mahimob.op="Android";

    cout<<mymob.colour<<" "<<mymob.model<<" "<<mymob.op<<endl;
    cout<<sadimob.colour<<" "<<sadimob.model<<" "<<sadimob.op<<endl;
    cout<<mahimob.colour<<" "<<mahimob.model<<" "<<mahimob.op<<endl;

    return 0;
}