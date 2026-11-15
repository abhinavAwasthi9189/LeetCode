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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr){
            return l2;
        }
        else if(l2==nullptr){
            return l1;
        }
        else{
            ListNode* p = new ListNode();
            p->val = l1->val + l2->val;
            int y = (p->val)/10;
            p->val%=10;
            if(y==0){
                p->next = addTwoNumbers(l1->next,l2->next);
            }
            else{
                p->next = addTwoNumbersx(l1->next,l2->next,y);
            }
            return p;
        }
    }
    ListNode* addTwoNumbersx(ListNode* l1, ListNode* l2,bool y) {
        if(l1==nullptr){
            ListNode* p = new ListNode(y);
            return addTwoNumbers(p,l2);
        }
        else if(l2==nullptr){
            ListNode* p = new ListNode(y);
            return addTwoNumbers(p,l1);
        }
        else{
            ListNode* p = new ListNode();
            p->val = l1->val + l2->val+1;
            int y = p->val/10;
            p->val%=10;
            if(y==0){
                p->next = addTwoNumbers(l1->next,l2->next);
            }
            else{
                p->next = addTwoNumbersx(l1->next,l2->next,y);
            }
            return p;
        }
    }
};