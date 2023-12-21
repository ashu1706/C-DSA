// Program to Delete The Middle Node


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head-> next == NULL){
            return NULL;
        }
        ListNode* prev=NULL;
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast && fast-> next){
            prev= slow;
            slow= slow-> next;
            fast= fast-> next-> next;

        }
        prev->next = slow-> next;
        slow-> next=NULL;
        delete slow;
        return head;
    }
};