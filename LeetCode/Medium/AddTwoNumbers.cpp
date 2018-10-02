/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0; 
        
        return addList(l1, l2, carry);
    }
    
    ListNode* addList(ListNode* l1, ListNode* l2, int carry){
        ListNode * result = new ListNode(0);
        int value = carry;
        
        if(l1 == 0 && l2 == 0 && carry == 0){
            return 0; 
        }
        
        if(l1 != 0){
            value += l1->val;
        }
        
        if(l2 != 0){
            value += l2->val;
        }
        
        result->val = value % 10; 
        
        if(l1 != 0 || l2 != 0){
            ListNode * more = addList(l1 == 0 ? 0 : l1->next, l2 == 0 ? 0 : l2->next, value >= 10 ? 1 : 0);
            result->next = more; 
        }
        
        return result;
        
    }
};