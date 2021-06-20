class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {
        if( root == NULL ) {
            return;
        }
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
