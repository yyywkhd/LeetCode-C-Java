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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode*temp = dummyhead;
        while(temp->next != NULL){
            if(temp ->next->val == val){
                ListNode* temp_2 = temp->next;
                temp->next = temp->next->next;
                delete temp_2;
            }else{
                temp = temp->next;
            }
        }
        head = dummyhead->next;
        delete dummyhead;
        return head;
    }
};