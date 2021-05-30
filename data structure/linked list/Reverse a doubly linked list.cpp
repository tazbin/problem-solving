/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {

    if( !llist ) return llist;

    DoublyLinkedListNode* node = nullptr;
    DoublyLinkedListNode* temp;

    while( llist ) {

        temp = llist->next;

        if( !node ) {
            node = llist;
            node->next = nullptr;
            node->prev = nullptr;
        } else {
            node->prev = llist;

            llist->next = node;
            llist->prev = nullptr;

            node = llist;
        }

        llist = temp;

    }

    return node;

}
