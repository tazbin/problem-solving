/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {

    SinglyLinkedListNode* pre = nullptr;
    SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

    if( llist == nullptr ) {
        return node;
    }

    while( position ) {
        pre = temp;
        temp = temp->next;

        position--;
    }

    pre->next = node;
    node->next = temp;

    return llist;

}
