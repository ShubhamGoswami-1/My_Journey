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
int Search(Node *head,int val){
    if(head == NULL){
        return -1;
    }
    if(head->data == val){
        return 1;
    }
    else{
        int res=Search(head->next,val);
        if(res==-1){
            return -1;
        }
        else{
            return res+1;
        }
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
    int val;
    cin>>val;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Print(head);
    cout<<"\n";
    cout<<Search(head,val);
    return 0;
}
