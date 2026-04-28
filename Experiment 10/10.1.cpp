#include<iostream>
using namespace std;

int arr[5];
int front=-1, rear=-1;

void enqueue(int x)
{
    if(rear==5-1)
    {
        cout<<"Overflow";
        return;
    }
    if(front==-1)
    {
        front=0;
    }
        arr[rear++]=x;
}
void dequeue()
{
    if(front==-1||front>rear)
    {
       cout<<"Underflow" ;
       return;
    }
    front++;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     
     dequeue();
     
      for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     
return 0;
}