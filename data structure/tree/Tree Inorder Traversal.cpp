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

    void inOrder(Node *root) {

        stack <Node *> s;
        Node *current;

        current = root;
        if( current == NULL ) return;

        s.push(current);
        while( current->left != NULL ) {
            current = current->left;
            s.push(current);
        }

        while( !s.empty() ) {

            current = s.top();
            s.pop();

            cout << current->data << " ";

            if( current->right != NULL ) {
                current = current->right;
                s.push(current);

                while( current->left != NULL ) {
                    current = current->left;
                    s.push(current);
                }
            }

        }

        // if( root == NULL ) {
        //     return;
        // }

        // inOrder(root->left);
        // cout << root->data << " ";
        // inOrder(root->right);

    }

}; //End of Solution
