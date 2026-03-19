#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,a[10][10];
    
    cout<<"Enter no of rows and columns: ";
    cin>>r>>c;
    
    cout<<"Enter elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Transposed matrix: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}