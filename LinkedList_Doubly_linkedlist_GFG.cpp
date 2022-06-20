#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
void Print(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    Node *temp2 = new Node(40);
    head->next = temp;
    temp->prev = head;
    temp->next = temp1;
    temp1->prev = temp;
    temp1->next = temp2;
    temp2->prev = temp1;
    Print(head);
    return 0;
}