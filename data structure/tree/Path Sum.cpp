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
    bool hasPathSum(TreeNode* root, int targetSum) {

        int r = checkRec( root, targetSum, 0 );

        if( r ) {
            return true;
        }

        return false;

    }


    int checkRec(TreeNode *current, int target, int sum) {

        if( current == nullptr ) {
            return 0;
        }

        sum += current->val;

        if( current->left == nullptr && current->right == nullptr && target == sum ) {
            return 1;
        } else if( current->left == nullptr && current->right == nullptr && target != sum ) {
            return 0;
        }

        return checkRec( current->left, target, sum ) || checkRec( current->right, target, sum );

    }
};
