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
    int maxDepth(TreeNode* root) {

        return getDepth(root, 0, 0);

    }

    int getDepth(TreeNode* root, int h, int c) {

        c++;

        if( root == nullptr ) {
            return h;
        }

        if( root->left == nullptr && root->right == nullptr ) {
            if( c > h ) {
                h = c;
            }
            return h;
        }

        return max( getDepth(root->left, h, c), getDepth(root->right, h, c) );

    }

};
