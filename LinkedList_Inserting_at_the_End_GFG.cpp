#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *InsertEnd(Node *head,int x){
    Node *curr = head;
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next = new Node(x);
    return head;
}
void Print(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return;
}
int main()
{
    int x;
    cin>>x;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Print(head);
    head=InsertEnd(head,x);
    Print(head);
    return 0;
}
