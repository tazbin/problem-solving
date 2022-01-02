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
    int minDepth(TreeNode* root) {

        if( root == nullptr ) return 0;

        return getMinDepth( root, 999999, 0 );

    }

    int getMinDepth( TreeNode* root, int m, int c ) {

        c++;

        if( root == nullptr ) {
            return m;
        }

        if( root->left == nullptr && root->right == nullptr ) {
            if( m > c ){
                m = c;
            }
            return m;
        }

        return min( getMinDepth( root->left, m, c ), getMinDepth( root->right, m, c ) );

    }
};
