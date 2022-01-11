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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        unsigned long long int sum = 0;
        int d = 0;
        int carry = 0;

        ListNode *l3 = new ListNode();
        ListNode *temp1 = new ListNode();

        l3 = temp1;

        while( 1 ) {

            d = 0;

            if( l1 != nullptr ) {
                d += l1->val;
                l1 = l1->next;
            }

            if( l2 != nullptr ) {
                d += l2->val;
                l2 = l2->next;
            }

            if( carry ) {
                d += carry;
                carry = 0;
            }

            carry = d / 10;
            d %= 10;

            ListNode *temp2 = new ListNode(d);
            temp1->next = temp2;
            temp1 = temp2;

            if( l1 == nullptr && l2 == nullptr ) {
                if( carry ) {
                    ListNode *temp2 = new ListNode(carry);
                    temp1->next = temp2;
                    temp1 = temp2;
                }
                break;
            }

        }

        return l3->next;

    }

};
