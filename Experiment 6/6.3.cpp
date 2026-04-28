#include<iostream>
using namespace std;
int search(int a[],int low,int high,int key,int n)
{
    if(low>high)
    {
        return 0;
    }
    int mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            cout<<"\nKey found - "<<key;
            return search(a,0,n-1,key*3,n);
        }
        else if(key>a[mid])
        {
            return search(a,mid+1,high,key,n);
        }
        else
        {
            return search(a,low,mid-1,key,n);
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
    
    cout<<"Enter key: ";
    cin>>key;
    
    high=l-1;
    low=0;
    
    search(a,low,high,key,l);
    
    return 0;
}