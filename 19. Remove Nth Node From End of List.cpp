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

        // finding the length of the linked-list
        int size =0;
        ListNode * temp = head;
        while(temp!=nullptr){
            temp = temp->next;
            size++;
        }

        // Handle the edge case where head needs to be removed
        if (n == size) {    //it means, we have to remove 1st element from start.
            head = head->next;
            return head;          // return new head
        }

        ListNode *current= head; //create a starting point.
        for(int i=1; i< (size-n); i++){
            current = current->next;
        }

        // Now we are the required index postion, skip the next node.
        current->next = current ->next ->next;

        return head;
        
    }
};











/*
find the size of the linked-list  (size)

//check edge case, if the size==n ; means, we have to delete the starting element of linked-list
				Therefore, head= head-->next.
													return Head.
													
													
//find the position from where, I have to detelte the node,
run a for loop from 1 to (size-n)
										go to that index.
										
										
skip the next node
currentNode->next = currentNode->next->next;


return **head** pointer

*/
