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
        Set<Integer> s=new HashSet<>();
        for(int x:nums) s.add(x);

        ListNode l=new ListNode(0);
        l.next=head;
        ListNode curr=head;
        ListNode prev=l;
        while(curr!=null){
            
            
               

            if(s.contains(curr.val)){
                prev.next=curr.next;
            }
            else{
                prev=curr;
            }
            curr=curr.next;
        }
          return l.next;
    }
}