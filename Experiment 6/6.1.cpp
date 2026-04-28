#include<iostream>
using namespace std;
int main()
{
    int i,mid,high,low,key,a[100],l,f=0;
    
    cout<<"Enter no of elements: ";
    cin>>l;
    
    cout<<"Enter sorted array: ";
    for(i=0;i<l;i++)
    {
        cin>>a[i];
    }
    
    high=l-1;
    low=0;
    
    cout<<"Enter key: ";
    cin>>key;
    
    
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            f=1;
            break;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    
    if(f==1)
    {
        cout<<"Key found";
    }
    else 
    {
        cout<<"Key not found";
    }
    
    return 0;
}