#include<iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        int flag = 0;
        for (int n = 2; n > i; n++)
        {
            for (int i; (i%n=2); n > i; n++)
            {
                for (int i; i % n == 0;)
                {
                    flag = 1;
                }
                
            }
            
        }
        
        if (flag == 0)
        {
            cout<<" "<<i;
        }
        
    }
    
    return 0;
}