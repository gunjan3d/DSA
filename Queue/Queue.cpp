#include<iostream>
using namespace std;

class Queue
{
    private:
    int arr[100];
    int front=0;
    int rear = -1;
    public:
    void push(int val)
    {
        if(rear == 100)
        {
            cout<<"overflow\n";
            return;
        }
        rear = rear+1;
        arr[rear] = val;
    }
    void pop()
    {
        if(front == 100)
        {
            cout<<"overdlow\n";
            return;
        }
        front = front + 1;
    }
    void top()
    {
        if(front >100)
        {
            cout<<"qeue is empty\n";
            return;
        }
        cout<<arr[front];
    }
};

int main()
{
    Queue q;
    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
    for(int i=0;i<10;i++)
    {
        q.top();
        cout<<" ";
        q.pop();
    }
    return 0;
}