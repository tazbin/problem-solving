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


    void postOrder(Node *root) {

        if( root == NULL ) {
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);

    }
