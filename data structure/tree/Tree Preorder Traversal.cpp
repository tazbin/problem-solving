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

void preOrder(Node *root) {
    if(root == NULL) {
            return;
        }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
