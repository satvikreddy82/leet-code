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
        vector<int>ans1;
        vector<int>ans2;
        ListNode* temp=head;
        while(temp!=NULL){
            ans1.push_back(temp->val);
            temp=temp->next;
        }
        ans2=ans1;
        reverse(ans1.begin(),ans1.end());
        if(ans1==ans2) return true;
        return false;
    }
};