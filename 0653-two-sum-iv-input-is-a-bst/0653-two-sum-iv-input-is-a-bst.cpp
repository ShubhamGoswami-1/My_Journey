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
        
        stack<TreeNode *>s1,s2;
        bool done1 = false, done2 = false;
        int val1,val2;
        TreeNode *curr1 = root, *curr2 = root;
        while(true){
            while(done1 == false){
                if(curr1 != NULL){
                    s1.push(curr1);
                    curr1 = curr1->left;
                }
                else{
                    if(s1.empty()){
                        done1 = true;
                    }
                    else{
                        curr1 = s1.top();
                        s1.pop();
                        val1 = curr1->val;
                        done1 = true;
                        curr1 = curr1->right;
                    }
                }
            }
            while(done2 == false){
                if(curr2 != NULL){
                    s2.push(curr2);
                    curr2 = curr2->right;
                }
                else{
                    if(s2.empty()){
                        done2 = true;
                    }
                    else{
                        curr2 = s2.top();
                        s2.pop();
                        val2 = curr2->val;
                        done2 = true;
                        curr2 = curr2->left;
                    }
                }
            }
            if(val1 != val2 && (val1 + val2) == k){
                return true;
            }
            else if((val1 + val2) < k){
                done1 = false;
            }
            else if((val1 + val2) > k){
                done2 = false;
            }
            if(val1 >= val2){
                return false;
            }
        }
    }
};