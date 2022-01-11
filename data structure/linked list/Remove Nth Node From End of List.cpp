/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int s = 0;

        ListNode* temp = head;

        while( temp ) {
            s++;
            temp = temp->next;
        }

        if( s == 1 ) {
            return nullptr;
        }

        if( s > 1 && n == s ) {
            return head->next;
        }

        s = s - n + 1;
        int c = 1;

        ListNode* pre = nullptr;
        temp = head;

        while( 1 ) {

            c++;

            pre = temp;
            temp = temp->next;

            if( c == s ) {
                pre->next = temp->next;
                break;
            }

        }

        return head;

    }
};
