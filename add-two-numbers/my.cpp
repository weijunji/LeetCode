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
        int val, in=0;
        ListNode head(0);
        ListNode* pr = &head;
        while(l1 != NULL || l2 != NULL || in != 0){
            int val1, val2;
            if(l1 != NULL){
                val1 = l1->val;
                l1 = l1->next;
            }else{
                val1 = 0;
            }
            if(l2 != NULL){
                val2 = l2->val;
                l2 = l2->next;
            }else{
                val2 = 0;
            }
            int sum = val1 + val2 + in;
            in = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            pr->next = node;
            pr = pr->next;
        }
        return head.next;
    }
};