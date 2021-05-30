// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* start = head;
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

    if( head == nullptr ) {
        return node;
    }

    while( head->next ) {
        head = head->next;
    }

    head->next = node;
    return start;

}
