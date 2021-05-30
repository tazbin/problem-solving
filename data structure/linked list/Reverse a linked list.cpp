/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode* node = nullptr;
    SinglyLinkedListNode* temp = llist;

    if( llist == nullptr ) {
        return node;
    }

    while( llist ) {

        temp = llist;
        llist = llist->next;

        if( node == nullptr ) {
            node = temp;
            node->next = nullptr;
        } else {
            temp->next = node;
            node = temp;
        }

    }

    return node;

}
