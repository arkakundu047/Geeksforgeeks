/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
       ListNode dummy = new ListNode (0);
        dummy.next=head;
        ListNode leftPre = dummy;
        ListNode current = head;
        
       for(int i=0 ; i< left-1 ; i++){
            leftPre=leftPre.next;
            current = current.next;
            
        }
        ListNode newhead= current;
        ListNode prev=null;
        ListNode forward = null;
     
        for (int i=0 ; i<=right-left; i++){
            forward= current.next;
            current.next=prev;
            prev=current;
            current=forward;
            
        }
        leftPre.next=prev;
        newhead.next= current;
        return dummy.next;
    }
}