#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int table_size, i, n, index;
    
    cout<<"Enter hash table size: ";
    cin>>table_size;
    
    cout<<"Enter no of elements: ";
    cin>>n;
    
    vector<int> hash_table(table_size, -1);  // -1 means empty
    
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        index = x % table_size;
        
        // Linear probing
        while(hash_table[index] != -1)
        {
            index = (index + 1) % table_size;  // move to next slot
        }
        
        hash_table[index] = x;
    }
    
    cout<<"\nHash table:";
    for(i=0;i<table_size;i++)
    {
        cout<<"\nAt index "<<i<<": ";
        
        if(hash_table[i] != -1)
            cout<<hash_table[i];
        else
            cout<<"Empty";
    }
    
    return 0;
}