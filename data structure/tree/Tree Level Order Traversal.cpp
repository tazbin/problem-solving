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

        queue<Node *> q;
        Node *current;

        if( root == NULL ) return;

        q.push(root);

        while( !q.empty() ) {

            current = q.front();
            q.pop();
            cout << current->data << " ";

            if( current->left != NULL ) {
                q.push(current->left);
            }
            if( current->right != NULL ) {
                q.push(current->right);
            }

        }

    }

}; //End of Solution
