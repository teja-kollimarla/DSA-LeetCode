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
    public ListNode modifiedList(int[] nums, ListNode head) {
        boolean[] has=new boolean[100001];
        for(int x:nums) has[x]=true;
        ListNode temp=new ListNode(0,head);
        ListNode prev=temp;
        ListNode curr=head;
        while(curr!=null){
            if(has[curr.val]){
                prev.next=curr.next;
            }
            else{
                prev=prev.next;
            }

            curr=curr.next;
        }
        return temp.next;

    }
}