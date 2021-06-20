/*
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

void levelOrder(Node * root) {
    Node* temp;
    queue<Node*> q;
    q.push(root);

    while( !q.empty() ) {
        temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if( temp->left ) {
            q.push(temp->left);
        }
        if( temp->right ) {
            q.push(temp->right);
        }
    }
}
