#include<bits/stdc++.h>
using namespace std;
/*
 Linked List is a linear data structure.
 Multiple Blocks Of Memory Linked Together.
 Linked List Doesnt Need A Contiguous Memory.
 If Memory is Fragmented then also we can make a linked list.
 Block Of Memory - Node -> data,next.
 Head Pointer Stores the Location of First Node.
 Last Node has NEXT field as NULL.
 Insert at HEAD,TAIL,Middle,After or Before a certain ELEMENT.
 Deletion.
*/
class node
{
    public:
    int data;
    node* next;

    node (int val)
    {
        data = val;
        next = NULL;
    } 
};

void insertAtTail(node* &head, int val)
{
    node *n = new node(val);
    if(head==NULL)
        {
            head=n;
            return;
        }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    //Linked_List
    node* head = NULL;
    insertAtTail(head,11);
    insertAtTail(head,12);
    insertAtTail(head,13);
    insertAtTail(head,14);
    insertAtTail(head,15);
    display(head);
    return 0;
}