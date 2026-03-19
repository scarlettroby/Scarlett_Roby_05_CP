#include<iostream>
using namespace std;

int main()
{
    int number,p;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"Enter position to check: ";
    cin>>p;
    
    if(number&(1<<p)!=0)
    {
        cout<<"Bit is set";
    }
    else
    {
        cout<<"Bit is unset";
    }
    return 0;
}