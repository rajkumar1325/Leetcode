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
    ListNode* reverseList(ListNode* head) {
        vector<int> result;
        ListNode *temp = head;
        while(temp != nullptr){
            result.push_back(temp->val);
            temp = temp->next;
        }

        // now we have a vector that contains all the elements
        ListNode *head1 = nullptr;
        ListNode *tail1 = nullptr;
        for(int i=result.size()-1; i>=0; i--){

            ListNode *temp1 = new ListNode(result[i]); //creating node

            if(head1 == nullptr){
                head1 = temp1;
                tail1 = temp1;
            }
            else{
                tail1->next = temp1; //link
                tail1 = temp1; //move
            }
        }
        return head1;
    }
};
