/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *Solve(ListNode*& head,int n){
        if(n <= 0){
            return NULL;
        }
        TreeNode *left = Solve(head,n/2);
        TreeNode *root = new TreeNode(head->val);
        root->left = left;
        head = head->next;
        root->right = Solve(head,n-(n/2)-1);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n=0;
        ListNode *curr = head;
        while(curr != NULL){
            ++n;
            curr = curr->next;
        }
        TreeNode *root = Solve(head,n);
        return root;
    }
};