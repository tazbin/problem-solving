/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

    SinglyLinkedListNode* pre = nullptr;
    SinglyLinkedListNode* temp = llist;

    if( position == 0 ) {
        return llist->next;
    }

    while( position ) {
        pre = temp;
        temp = temp->next;

        position--;
    }

    pre->next = temp->next;

    return llist;

}
