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
    
    vector<vector<int>> hash_table(table_size); 
    
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        index = x % table_size;
        hash_table[index].push_back(x); 
    }
    
    cout<<"\nHash table:";
    for(i=0;i<table_size;i++)
    {
        cout<<"\nAt index "<<i<<": ";
        
        for(int j=0;j<hash_table[i].size(); j++)
        {
            cout<<hash_table[i][j]<<"->";
        }
    }
    
    return 0;
}