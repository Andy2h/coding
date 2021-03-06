/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    bool isBalanced(TreeNode *root) {
        // write your code here
        return isBalancedHelper(root) >= 0;
    }
    
    int isBalancedHelper(TreeNode *root){
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        
        int l = isBalancedHelper(root->left);
        if(l < 0) return -1;
        int r = isBalancedHelper(root->right);
        if(r < 0) return -1;
        
        if(abs(l-r) <= 1) return max(l, r)+1;
        else return -1;
    }
};
