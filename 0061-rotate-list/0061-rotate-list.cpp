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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr){return head;}
        std::vector<ListNode*> L;
        ListNode* root = head;
        while(root != nullptr){
            L.push_back(root);
            root= root->next;
        }
        k%=L.size();
        if(!k){return head;}

        L.back()->next = head;
        while(k){
            L.pop_back();
            k--;
        }
        ListNode* newhead = L.back()->next;
        L.back()->next = nullptr;
        return newhead;
    }
};