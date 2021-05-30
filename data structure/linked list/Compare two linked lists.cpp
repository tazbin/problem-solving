// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    while( head1 && head2 ) {
        if( head1->data == head2->data ) {
            head1 = head1->next;
            head2 = head2->next;
        } else {
            break;
        }
    }

    if( head1 || head2 ) {
        return 0;
    }

    return 1;

}
