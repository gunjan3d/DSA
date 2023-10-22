#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(node* &head,int val)
{
    node* temp =head;
    node* n = new node(val);
    if(head== NULL)
    {
        head = n;
    }
    else if(head->next==NULL)
    {
        head->next = n;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    // n->next=NULL;
}
// 3
int GetNTH(node* head, int index)
{
    node* temp =head;
    while(index--)
    {
        if(temp==NULL) return -1;
        else
        temp=temp->next;
    }
    return temp->data;
}

// 4

void display(node* head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
    }
    cout<<"Null"<<endl;
}
int main()
{
    node* head;
    for(int i=0;i<10;i++)
    {
        insert_at_tail(head,i);
    }
    display(head);
    cout<<GetNTH(head,4);
    return 0;
}