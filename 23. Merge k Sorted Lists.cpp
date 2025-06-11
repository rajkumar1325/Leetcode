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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

    //  converting 2D array into 1D array
        vector<int> result;
        for(ListNode * node : lists){
            while(node != nullptr){ //works on sublists
                result.push_back(node->val);
                node = node->next;
            }
        }

        // sort the array
        sort(result.begin(), result.end());

        // now simply create a method to create a node.
        ListNode * head = nullptr;
        ListNode * tail = nullptr;


        for(int i: result){
            ListNode * temp = new ListNode(i);

            if(head == nullptr){
                head = temp;
                tail = temp;
            }

            else{
                tail->next = temp;
                tail = temp;
            }
        }

    return head;


    }
};
