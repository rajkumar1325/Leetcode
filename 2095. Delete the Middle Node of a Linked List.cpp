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
    ListNode* deleteMiddle(ListNode* head) {

        // finding the size of the linked-list
        ListNode *tail = head;
        int size=0;
        while(tail != nullptr){
            tail = tail->next;
            size++;
        }

        // moving to that index
        size /= 2;

        ListNode *idx = head;
        for(int i=1; i< size; i++){
            idx = idx->next;
            
        }


        // handle edge case
        if(size ==0){ //means linked-list have 0 or 1 element,(if 1 +nt remove that)
            return nullptr;
        }

        // deleting node on that index
        ListNode *temp2 = idx->next->next;
        idx->next = temp2;

        return head;

    }
};
