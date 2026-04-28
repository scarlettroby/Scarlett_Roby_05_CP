#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,key,index;
    
    cout<<"Enter size: ";
    cin>>n;
    
    cout<<"Enter sorted elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter key: ";
    cin>>key;
    
    
    for(i=n;i>0;i--)
    {
        if(a[i]==key)
        {
            index=i;
            break;
        }
    }
    
    cout<<"last occ of element is at index: "<<index;
    return 0;
}