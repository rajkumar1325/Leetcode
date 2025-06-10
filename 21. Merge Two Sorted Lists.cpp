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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        if (list1 == nullptr && list2 == nullptr)
            return nullptr;

        int smallest = 0;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                smallest = list1->val;
                list1 = list1->next; // update to next
            } else {
                smallest = list2->val;
                list2 = list2->next; // update it
            }

            // now simply create a linked-list with end-Insertion
            ListNode* temp = new ListNode(smallest);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp; // linking
                tail = temp;       // moving
            }
        }


        // checking if linked-list-1 still have some nodes
        while (list1 != nullptr) {
            ListNode* temp = new ListNode(list1->val);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp; // linking
                tail = temp;       // moving
            }
            list1 = list1->next;
        }


        // checking if linked-list-2 still have some nodes
        while (list2 != nullptr) {
            ListNode* temp = new ListNode(list2->val);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp; // linking
                tail = temp;       // moving
            }
            list2 = list2->next; // move forward
        }
        return head;
    }
};
