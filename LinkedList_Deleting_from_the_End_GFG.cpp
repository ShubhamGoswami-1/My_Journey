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
Node *DeleteEnd(Node *head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node *curr = head;
        while(curr->next->next != NULL){
            curr = curr->next;
        }
        delete (curr->next);
        curr->next = NULL;
    }
    return head;
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
    head=DeleteEnd(head);
    Print(head);
    return 0;
}
