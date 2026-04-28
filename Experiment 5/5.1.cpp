#include<iostream>
using namespace std;
int main()
{
    int table_size, i, n, index;
    int hash_table[100], a[100];
    
    cout<<"Enter hash table size: ";
    cin>>table_size;
    
    cout<<"Enter no of elements: ";
    cin>>n;
    
     for(i=0;i<table_size;i++)
    {
      hash_table[i]=0;
    }
    
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        index=a[i]%table_size;
        hash_table[index]=a[i];
    }
    
    cout<<"Hash table: ";
    for(i=0;i<table_size;i++)
    {
        cout<<"\nat i= "<<i<<":"<<hash_table[i];
    }
    return 0;
}