/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root) {
    if( root == NULL ) {
        return -1;
    }
    int maxLeft = height(root->left);
    int maxRight = height(root->right);
    int result = maxLeft > maxRight ? maxLeft : maxRight;

    return result+1;
}
