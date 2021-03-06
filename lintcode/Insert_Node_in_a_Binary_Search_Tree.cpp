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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        // write your code here
        if(!root) return node;
        
        int x = node->val;
        TreeNode *p = root;
        while(p){
            if(p->val < x){
                if(p->right) p = p->right;
                else{
                    p->right = node;
                    return root;
                }
            }else if(p->val > x){
                if(p->left) p = p->left;
                else {
                    p->left = node;
                    return root;
                }
            }else return root;
        }
    }
};
