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
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode *>it1,it2;
        TreeNode *c = root;
        while(c != NULL){
            it1.push(c);
            c = c->left;
        }
        c = root;
        while(c != NULL){
            it2.push(c);
            c = c->right;
        }
        while(it1.top() != it2.top()){
            int v1 = it1.top()->val;
            int v2 = it2.top()->val;
            if((v1 + v2) == k){
                return true;
            }
            if((v1 + v2) < k){
                c = it1.top()->right;
                it1.pop();
                while(c != NULL){
                    it1.push(c);
                    c = c->left;
                }
            }
            else{
                c = it2.top()->left;
                it2.pop();
                while(c != NULL){
                    it2.push(c);
                    c = c->right;
                }
            }
        }
        return false;
    }
};