/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    ListNode node; 
    
    public ListNode reverseList(ListNode head) {
        if(head == null){
            return head; 
        }
        
        
        return reverse(head); 
    }
    
    public ListNode reverse(ListNode head){
        ListNode prev = null;
        ListNode curr = head; 
        ListNode next = null; 
    
        while(curr != null){
            next = curr.next;
            curr.next = prev; 
            prev = curr; 
            curr = next; 
        }
        
        return prev; 
    }
}