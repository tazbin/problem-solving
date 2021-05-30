/*
 * Complete the 'removeDuplicates' function below.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    if( !llist || !llist->next ) {
        return llist;
    }

    SinglyLinkedListNode* start = llist;
    SinglyLinkedListNode* temp;

    while( llist->next ) {

        if( llist->data == llist->next->data ) {

            temp = llist->next;

            if( llist->next->next ) {
                llist->next = llist->next->next;
            } else {
                llist->next = nullptr;
            }

            free(temp);

        } else {

            llist = llist->next;
        }

    }

    return start;

}
