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

        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        int carry = 0; //carry-over

        // h1 is not NULL OR h2 is not NULL OR carry is not 0
        while(l1 != nullptr || l2 != nullptr  || carry>0){

            // handle cases where l1 and l2 size are different.
            int x = (l1 != nullptr)? l1->val : 0;
            int y = (l2 != nullptr)? l2->val : 0;

            int sum = (x+y) + carry;
            int remainder = sum%10;
            carry = sum/10;

            ListNode *temp = new ListNode(remainder);

            if (head == nullptr){
                head = temp;
                tail = temp;
            }

            else{
                tail ->next = temp;
                tail = temp;
            }

            // update only if its next is not null, else dont update it;
            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        return head;
    }
};
