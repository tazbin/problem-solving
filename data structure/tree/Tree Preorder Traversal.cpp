#include <bits/stdc++.h>

using namespace std;

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

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

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

    void preOrder(Node *root) {

        stack <Node *> s;
        if( root == NULL ) {
            return;
        }

        cout << root->data << " ";

        s.push(root->right);
        s.push(root->left);

        while( !s.empty() ) {
            Node *temp;
            temp = s.top();
            s.pop();
            if( temp != NULL ){
                cout << temp->data << " ";
                s.push(temp->right);
                s.push(temp->left);
            }
        }


        // if( root == NULL ) {
        //     return;
        // } else {
        //     cout << root->data << " ";
        //     preOrder(root->left);
        //     preOrder(root->right);
        // }



    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

	myTree.preOrder(root);
    return 0;
}
