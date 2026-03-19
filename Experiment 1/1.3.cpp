#include<iostream>
using namespace std;

int main()
{
    int l,a[50];
    cout<<"Enter no of values: ";
    cin>>l;
    
    a[0]=0;
    a[1]=1;
    for(int j=0; j<2; j++)
    {
        cout<<a[j]<<" ";
    }
    
    for(int i=0;i<l-2;i++)
    {
        a[i+2]=a[i]+a[i+1];
        cout<<a[i+2]<<" ";
    }
    return 0;
}