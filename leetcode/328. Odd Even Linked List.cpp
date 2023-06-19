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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* odd_head = new ListNode(0);
        ListNode* even_head = new ListNode(0);
        ListNode* odd = odd_head;
        ListNode* even = even_head;
        int index = 1;
        while(head){
            if(index & 1){
                odd->next = head;
                odd = odd -> next;
            }else{
                even->next = head;
                even = even -> next;
            }
            head = head->next;
            ++index;
        }
        if(even->next){
            even->next = nullptr;
        }
        if(even_head->next){
            odd->next = even_head->next;
        }
        return odd_head->next;
    }
};