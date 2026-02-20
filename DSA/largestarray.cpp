#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n , max , k;

    cout<<"Enter the size (max:100) : ";
    cin>>n;

    cout<<"Enter"<<n<<"Array Elements : ";
    for (k= 0; k < n; k++)
    cin>>arr[k];
    max = arr[0];
    
    for (k = 1; k < n; k++)
    {
        if (max < arr[k])
        {
            max = arr[k];
        }
        
    }  
    cout<<"\n Largest Number = "<<max;
    cout<<endl;
    
    return 0;
}
    
    