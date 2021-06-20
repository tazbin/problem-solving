/* you only have to complete the function given below.
Node is defined as

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

    Node * insert(Node * root, int data) {

        Node* temp = new Node(data);
        Node* t = root;
        if( root == NULL ) {
            return temp;
        }

        while( 1 ) {
            if( t->data > data ) {
                if( !t->left ) {
                    t->left = temp;
                    break;
                }
                t = t->left;
            } else {
                if( !t->right ) {
                    t->right = temp;
                    break;
                }
                t = t->right;
            }
        }
        return root;
    }
