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

    vector<int> s;
    int pairSum(ListNode* head) {
        while(head){
            s.push_back({head->val});
            head=head->next;
        }
        int sum=0;
        for(int i=0;i<(s.size()/2);i++){
            int tempSum=s[i]+s[s.size()-1-i];
            cout<<s[i]<<" "<<s[s.size()-1-i]<<" "<<s.size()<<endl;
            if(tempSum>sum){
                sum=tempSum;
            }
        }
        return sum;

    }
};