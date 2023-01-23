#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int front=-1;
int rear=-1;
 void enqueue(int cqueue[],int x,int size)
 {
    //full
    if(rear==(size-1)&& front==0)
    {
        cout<<"overflow";
    }
    else if(front==rear+1)
    {
        cout<<"overflow";
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front++;
        }
        rear=(rear+1)%size;
        cqueue[rear]=x;
    }
 }
 
void display(int cqueue[],int size,int k)
{

 front=k;
        for(int i=front;i<=rear;i++)
        {
            cout<<cqueue[i]<<" ";
        }
     
        for(int i=0;i<k;i++)
        {
            cout<<cqueue[i]<<" ";
        }
    
   }


int main() {

    int size,k;
    cin>>size;
    int cqueue[size];

    
    k=size;
    while(k--)
    {
      int t;
      cin>>t;
      enqueue(cqueue,t,size);
    }
    int y;
    cin>>y;
    
    display(cqueue,size,y);

      
 

    return 0;
}