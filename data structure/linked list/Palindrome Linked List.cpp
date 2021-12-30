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
    bool isPalindrome(ListNode* head) {

        vector<int> a;

        ListNode* temp = head;
        while( temp ) {
            a.push_back( temp->val );
            temp = temp->next;
        }

        int l = a.size();

        for( int i=0; i<l/2; i++ ) {
            if(a[i] != a[l-1-i]) {
                return false;
            }
        }

        return true;

    }
};
