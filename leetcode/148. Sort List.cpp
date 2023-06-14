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
    ListNode* Partition(ListNode* head, ListNode* tail){
        auto pivot = head->val;
        auto left = head;
        auto cur = head->next;
        while(cur!= tail){
            if(cur->val < pivot){
                left = left->next;
                swap(left->val,cur->val);
            }
            cur = cur -> next;
        }
        swap(head->val,left->val);
        return left;
    }
    void Quick_Sort(ListNode* head, ListNode* tail){
        if(head == tail || head->next == tail)  return;
        auto q = Partition(head, tail);
        Quick_Sort(head,q);
        Quick_Sort(q->next,tail);
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        Quick_Sort(head, NULL);
        return head;
    }
};