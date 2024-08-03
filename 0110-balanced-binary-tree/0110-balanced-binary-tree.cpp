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
    bool isBalanced(TreeNode* root) {
        return cheak(root) != -1;
    }
    int cheak(TreeNode* root){
        if(!root) return 0;
        int left= cheak(root->left);
        if(left == -1) return -1;
        int right= cheak(root->right);
        if(right == -1) return -1;

        if( abs(left-right)>1) return -1;
        return max(left, right) +1;
    }
};