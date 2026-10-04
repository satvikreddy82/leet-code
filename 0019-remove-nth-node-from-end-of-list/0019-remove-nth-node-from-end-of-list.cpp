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
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;//count number of nodes in total 
            temp=temp->next;
        }
        if(n==count) return head->next;
        int pos=count-n;//then find index we want to delete
        temp=head;
        int c=0;
        while(c<pos-1){
            c++;//last at before index we want to delete
            temp=temp->next;
        }
        temp->next=temp->next->next;//delete node
        return head;
    }
};