/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void SolveDown(TreeNode *root,int k,vector<int>&res){
        if(root == NULL || k < 0){
            return ;
        }
        if(k == 0){
            res.push_back(root->val);
            return;
        }
        SolveDown(root->left,k-1,res);
        SolveDown(root->right,k-1,res);
    }
    int Solve(TreeNode *root,TreeNode *target,int k,vector<int>&res){
        if(root == NULL){
            return -1;
        }
        if(root == target){
            SolveDown(root,k,res);
            return 0;
        }
        int dl = Solve(root->left,target,k,res);
        if(dl != -1){
            if(dl+1 == k){
                res.push_back(root->val);
            }
            else{
                SolveDown(root->right,k-dl-2,res);
            }
            return dl+1;
        }
        int dr = Solve(root->right,target,k,res);
        if(dr != -1){
            if(dr+1 == k){
                res.push_back(root->val);
            }
            else{
                SolveDown(root->left,k-dr-2,res);
            }
            return dr+1;
        }
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>res;
        Solve(root,target,k,res);
        return res;
    }
};