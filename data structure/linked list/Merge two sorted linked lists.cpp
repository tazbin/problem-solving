// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if( !head1 ) return head2;
    if( !head2 ) return head1;

    SinglyLinkedListNode* start = head1;
    SinglyLinkedListNode* pre = nullptr;
    SinglyLinkedListNode* temp;

    while( head2 && head1 ) {

        if( head1->data > head2->data ) {

            temp = head2->next;

            if( pre ) {

                pre->next = head2;
                head2->next = head1;

            } else {

                start = head2;
                head2->next = head1;

            }

            pre = head2;
            head2 = temp;

        } else {

            pre = head1;
            head1 = head1->next;

        }

    }

    while( head2 ) {

        pre->next = head2;
        head2 = head2->next;
        pre = pre->next;

    }

    return start;

}
