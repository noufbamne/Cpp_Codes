/*syntax:-
struct function_name(parameters)
{
    // code
}*/

#include<iostream>
using namespace std;
struct employeeinfo
{
    int employee_id;
    float salary;
    char section;
};
int main()
{
    struct employeeinfo nouf;
    nouf.employee_id=1;
    nouf.salary=80000;
    nouf.section='A';

    cout<<"employee_id:"<<nouf.employee_id<<endl;
    cout<<"salary:"<<nouf.salary<<endl;
    cout<<"section:"<<nouf.section<<endl;

    return 0;

}
/*it is user defined datatype 
when different datatypes are used in a function then we create structure datatype
it is used to combining different items 

Union : union are conceptually similar to the structure as they allow us to group together 
dissimilar type of elements inside a single unit but there are significant differnces between structure
and union as far as their implementtaion is concered the size of a structure type is equal to the sum of
the sizes of individual member types however the siz eof  a union is equal to thesize of it's member element

Ennumaration:an ennumerated dattatype is another user defined datatype which provides a way for attaching names
to numbers ,thereby increasing comprehensibility of the codeNoufhe enum keyword automatically ennumrates a list 
of words by assigning them values 0,1,2,3 and so on.*/

 

