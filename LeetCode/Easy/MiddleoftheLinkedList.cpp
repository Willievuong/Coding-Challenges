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
    ListNode* middleNode(ListNode* head) {
        ListNode * local = head; 
        int listSize = 0; 
        int oddEven = listSize % 2; 
        while(local != NULL){
            listSize++; 
            local = local->next; 
        }
        
        local = head; 
        for (int i = 0; i < listSize /2; i++){
                local = local->next;
        }
        
        if(oddEven == 1){
            local = local->next;                
        }
            
         if(oddEven == 0){

        }

        return local;
    }
};