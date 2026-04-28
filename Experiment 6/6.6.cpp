#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n;
    
    cout<<"Enter size: ";
    cin>>n;
    
    cout<<"Enter sorted elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            cout<<a[i]<<" is a peak element\n";
        }
    }
    
    return 0;
}