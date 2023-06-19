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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr && head -> next == nullptr){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* pre = dummy;
        for(int i = 0; i < left -1; i++){
            pre = pre->next;
        }

        ListNode* cur = pre -> next;
        ListNode* future = cur -> next;
     
        for(int i = 0; i < right - left; i++){
            cur->next = future -> next;
            future -> next = pre->next;
            pre->next = future;
            future = cur -> next;
        }
        return dummy -> next;
    }
};