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
Node *InsertPos(Node *head,int pos,int data){
    Node *curr = new Node(data);
    if(pos == 1){
        curr->next = head;
        return curr;
    }
    Node *temp = head;
    for(int i=1;i<=pos-2 && curr!=NULL ;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        return NULL;
    }
    curr->next=temp->next;
    temp->next=curr;
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
    int pos,data;
    cin>>pos>>data;
    Print(head);
    cout<<"\n";
    InsertPos(head,pos,data);
    Print(head); 
    return 0;
}
