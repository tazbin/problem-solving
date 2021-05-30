/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {

    DoublyLinkedListNode* start = llist;
    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);

    int inserted = 0;

    if( !llist ) return node;

    while( 1 ) {
        if( llist->data > data ) {

            if( llist->prev == nullptr ) {

                start = node;
                node->next = llist;
                llist->prev = node;

            } else {

                llist->prev->next = node;
                node->prev = llist->prev;

                node->next = llist;
                llist->prev = node;

            }

            inserted = 1;
            break;

        }

        if( llist->next ) {
            llist = llist->next;
        } else {
            break;
        }
    }

    if( !inserted ) {
        llist->next = node;
        node->prev = llist;
    }

    return start;

}
