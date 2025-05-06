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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0,countB=0;
        ListNode* cA=headA;
        ListNode* cB=headB;
        while(cA){
            countA++;
            cA=cA->next;
        }
        while(cB){
             countB++;
            cB=cB->next;
        }
        if(countA>countB){
            while(countA!=countB){
                headA=headA->next;
                countA--;
            }
        }else{
            while(countA!=countB){
                headB=headB->next;
                countB--;
            }
        }
        while (headA && headB) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return NULL; // No intersection
    
        
    }
};