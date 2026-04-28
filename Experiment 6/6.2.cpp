#include<iostream>
using namespace std;
int search(int a[],int low,int high,int key)
{
    if(low>high)
    {
        return 0;
    }
    int mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            return 1;
        }
        else if(key>a[mid])
        {
            return search(a,low=mid+1,high,key);
        }
        else
        {
            return search(a,low,high=mid-1,key);
        }
}

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

    
    if(search(a,low,high,key)==1)
    {
        cout<<"Key found";
    }
    else 
    {
        cout<<"Key not found";
    }
    
    return 0;
}