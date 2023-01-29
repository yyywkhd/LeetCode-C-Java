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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp = new ListNode();
        ListNode* temp2 = temp;
        /*if(temp == temp2){
            cout << "yes" << endl;
        }*/
        while (l1 != NULL || l2 != NULL || carry){
            int total = 0;
            if (l1 != NULL){
                total += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2 != NULL){
                total += l2 -> val;
                l2 = l2 -> next;
            }
            total = total + carry;
            carry = total / 10;
            ListNode* newnode = new ListNode(total%10);
            temp2 -> next = newnode;
            temp2 = temp2 -> next;
        }
        return temp->next;
    }
};