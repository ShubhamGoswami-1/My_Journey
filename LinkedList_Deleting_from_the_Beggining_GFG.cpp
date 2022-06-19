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

Node *DeleteBeg(Node *head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node *curr = head->next;
        delete head;
        return curr;
    }
}
void Print(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Print(head);
    cout<<"\n";
    head=DeleteBeg(head);
    Print(head);  
    return 0;
}
