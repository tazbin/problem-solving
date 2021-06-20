/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/


void decode_huff(node * root, string s) {
    string r = "";
    node* t = root;

    for( int i=0; i < s.length(); i++ ) {
        if( s[i] == '1' ) {
            t = t->right;
        } else {
            t = t->left;
        }

        if( !t->right && !t->left ) {
            r += t->data;
            t = root;
        }
    }

    cout << r << endl;
}
