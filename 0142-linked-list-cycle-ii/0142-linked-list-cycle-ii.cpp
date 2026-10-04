class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
            //floyd's Cycle detection method
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
            //this loops checks whether cycle exits or not
            if(slow == fast)
                break;
        }

        // No cycle
        if(fast == NULL || fast->next == NULL)
            return NULL;

        // Find starting point of cycle
        slow = head;

        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;//slow/fast b/c both points to same node
    }
};