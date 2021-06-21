/*
The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

int small = -1;
int big = 99999;

bool BSTUtils(Node* root, int small, int big) {
    if( root == NULL ) {
        return true;
    }

    if( root->data > small && root->data < big &&
       BSTUtils(root->left, small, root->data) &&
       BSTUtils(root->right, root->data, big) ) {
        return true;
    }

    return false;
}

bool checkBST(Node* root) {
    return BSTUtils(root, small, big);
}
