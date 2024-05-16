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
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null) return null;
        ListNode curr = head;
        while(curr!=null){
            if((curr.next!=null)&& (curr.val==curr.next.val)){
                ListNode temp=curr.next.next;
                ListNode todelete=curr.next;
                curr.next=null;
                curr.next=temp;
            }
            else{
                curr=curr.next;
            }
        }
        return head;
    }
}