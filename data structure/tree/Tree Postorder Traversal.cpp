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


    void postOrder(Node *root) {

        stack <Node*> s1;
        stack <Node*> s2;

        s2.push(root);

        while( !s2.empty() ) {

            Node *temp = s2.top();
            s1.push(temp);
            s2.pop();

            if( temp->left != NULL ) {
                s2.push(temp->left);
            }

            if( temp->right != NULL ) {
                s2.push(temp->right);
            }

        }

        while( !s1.empty() ) {
            Node* temp = s1.top();
            cout << temp->data << " ";
            s1.pop();
        }

        // if( root == NULL ) {
        //     return;
        // }

        // postOrder(root->left);
        // postOrder(root->right);
        // cout << root->data << " ";
    }

}; //End of Solution
