/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {

    if( !llist ) return -1;

    int counter = 0;
    int result = 0;

    SinglyLinkedListNode* node = llist;

    while( llist->next ) {
        counter++;
        if( counter - result > positionFromTail ) {
            node = node->next;
        }

        llist = llist->next;
    }

    return node->data;

}
