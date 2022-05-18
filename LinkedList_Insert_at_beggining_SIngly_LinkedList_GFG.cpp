#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node *insertBeg(Node *head,int x){
    Node *curr = new Node(x);
    curr->next=head;
    return curr;
}
int main()
{
    Node *head=NULL;
    head=insertBeg(head,10);
    head=insertBeg(head,20);
    head=insertBeg(head,30);
    print(head);
    return 0;
}