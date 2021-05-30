// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    int v;
    int f = 0;
    SinglyLinkedListNode* h1 = head1;

    while( head2 ) {

        head1 = h1;

        while( head1 ) {
            if( head2->next == head1 ) {
              v = head2->next->data;
              f++;
              break;
            }

            head1 = head1->next;
        }

        if( f ) {
            break;
        }

        head2 = head2->next;

    }

    return v;

}
